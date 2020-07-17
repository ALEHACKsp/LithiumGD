#include <Windows.h>
#include <TlHelp32.h>
#include <iostream>

#include "Game.h"
#include "Offsets.h"

uintptr_t cGame::GetModule(const char* ModuleName) {
	uintptr_t BaseAddress = 0;
	HANDLE Module = CreateToolhelp32Snapshot(TH32CS_SNAPMODULE | TH32CS_SNAPMODULE32, ProcessID);
	MODULEENTRY32 ModuleEntry;
	ModuleEntry.dwSize = sizeof(ModuleEntry);

	if (Module32First(Module, &ModuleEntry)) {
		do {
			if (!strcmp(ModuleEntry.szModule, ModuleName)) {
				BaseAddress = (uintptr_t)ModuleEntry.modBaseAddr;
				break;
			}
		} while (Module32Next(Module, &ModuleEntry));
	}

	CloseHandle(Module);
	return BaseAddress;
}

void cGame::GetProcess() {
	HWND Window = 0;
	do {
		Window = FindWindowA(0, "Geometry Dash");
		Sleep(500);
	} while (!Window);

	GetWindowThreadProcessId(Window, &ProcessID);
	ProcessHandle = OpenProcess(0x38, 0, ProcessID);
}

void* cGame::GetProcessHandle() {
	return ProcessHandle;
}

unsigned long cGame::GetGeometryDashModule() {
	if (GeometryDashModule == 0) {
		GeometryDashModule = GetModule(GeometryDashModuleName);
	}

	return GeometryDashModule;
}

unsigned long cGame::GetLibCocosModule() {
	if (LibCocosModule == 0) {
		LibCocosModule = GetModule(LibCocosModuleName);
	}

	return LibCocosModule;
}
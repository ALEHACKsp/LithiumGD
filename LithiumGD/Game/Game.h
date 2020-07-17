#pragma once

class cGame {
public:
	uintptr_t GetModule(const char*);
	void GetProcess();
	void* GetProcessHandle();

	unsigned long GetGeometryDashModule();
	unsigned long GetLibCocosModule();

private:
	void* ProcessHandle = 0;

	unsigned long ProcessID = 0;
	unsigned long GeometryDashModule = 0;
	unsigned long LibCocosModule = 0;

	const char* GeometryDashModuleName = "GeometryDash.exe";
	const char* LibCocosModuleName = "libcocos2d.dll";
};

extern cGame* Game;
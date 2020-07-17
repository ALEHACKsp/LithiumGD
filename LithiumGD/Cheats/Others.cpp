#include <Windows.h>

#include "Cheats.h"
#include "../Game/Game.h"
#include "../Game/Offsets.h"

void cCheats::AntiCheatBypass() {
	static const char Patch1[] = { 0xEB, 0x2E };
	static const char Patch2[] = { 0xEB };
	static const char Patch3[] = { 0xEB };
	static const char Patch4[] = { 0xEB, 0x0C };
	static const char Patch5[] = { 0xC7, 0x87, 0xE0, 0x02, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xC7, 0x87, 0xE4, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90 };
	static const char Patch6[] = { 0x90, 0x90, 0x90, 0x90, 0x90, 0x90 };
	static const char Patch7[] = { 0x90, 0x90, 0x90, 0x90, 0x90, 0x90 };
	static const char Patch8[] = { 0x90, 0x90, 0x90, 0x90, 0x90, 0x90 };
	static const char Patch9[] = { 0x90, 0x90, 0x90, 0x90, 0x90 };
	static const char Patch10[] = { 0x90, 0x90 };
	static const char Patch11[] = { 0xB0, 0x01 };
	static const char Patch12[] = { 0xE9, 0xD7, 0x00, 0x00, 0x00, 0x90 };

	static const char OriginalAddress1[] = { 0x74, 0x2E };
	static const char OriginalAddress2[] = { 0x74 };
	static const char OriginalAddress3[] = { 0x74 };
	static const char OriginalAddress4[] = { 0x74, 0x0C };
	static const char OriginalAddress5[] = { 0x80, 0xBF, 0xDD, 0x02, 0x00, 0x00, 0x00, 0x0F, 0x85, 0x0A, 0xFE, 0xFF, 0xFF, 0x80, 0xBF, 0x34, 0x05, 0x00, 0x00, 0x00, 0x0F, 0x84, 0xFD, 0xFD, 0xFF, 0xFF };
	static const char OriginalAddress6[] = { 0x0F, 0x84, 0xFD, 0xFD, 0xFF, 0xFF };
	static const char OriginalAddress7[] = { 0x0F, 0x84, 0xB9, 0xFD, 0xFF, 0xFF };
	static const char OriginalAddress8[] = { 0x0F, 0x85, 0xA4, 0xFD, 0xFF, 0xFF };
	static const char OriginalAddress9[] = { 0xE8, 0x58, 0x04, 0x00, 0x00 };
	static const char OriginalAddress10[] = { 0x74, 0x6E };
	static const char OriginalAddress11[] = { 0x88, 0xD8 };
	static const char OriginalAddress12[] = { 0x0F, 0x85, 0xD6, 0x00, 0x00, 0x00 };

	if (Configuration.AntiCheatBypass) {
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.AntiCheatBypass.Address1), &Patch1, sizeof(Patch1), 0);
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.AntiCheatBypass.Address2), &Patch2, sizeof(Patch2), 0);
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.AntiCheatBypass.Address3), &Patch3, sizeof(Patch3), 0);
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.AntiCheatBypass.Address4), &Patch4, sizeof(Patch4), 0);
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.AntiCheatBypass.Address5), &Patch5, sizeof(Patch5), 0);
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.AntiCheatBypass.Address6), &Patch6, sizeof(Patch6), 0);
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.AntiCheatBypass.Address7), &Patch7, sizeof(Patch7), 0);
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.AntiCheatBypass.Address8), &Patch8, sizeof(Patch8), 0);
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.AntiCheatBypass.Address9), &Patch9, sizeof(Patch9), 0);
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.AntiCheatBypass.Address10), &Patch10, sizeof(Patch10), 0);
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.AntiCheatBypass.Address11), &Patch11, sizeof(Patch11), 0);
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.AntiCheatBypass.Address12), &Patch12, sizeof(Patch12), 0);
	}
	else {
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.AntiCheatBypass.Address1), &OriginalAddress1, sizeof(OriginalAddress1), 0);
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.AntiCheatBypass.Address2), &OriginalAddress2, sizeof(OriginalAddress2), 0);
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.AntiCheatBypass.Address3), &OriginalAddress3, sizeof(OriginalAddress3), 0);
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.AntiCheatBypass.Address4), &OriginalAddress4, sizeof(OriginalAddress4), 0);
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.AntiCheatBypass.Address5), &OriginalAddress5, sizeof(OriginalAddress5), 0);
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.AntiCheatBypass.Address6), &OriginalAddress6, sizeof(OriginalAddress6), 0);
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.AntiCheatBypass.Address7), &OriginalAddress7, sizeof(OriginalAddress7), 0);
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.AntiCheatBypass.Address8), &OriginalAddress8, sizeof(OriginalAddress8), 0);
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.AntiCheatBypass.Address9), &OriginalAddress9, sizeof(OriginalAddress9), 0);
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.AntiCheatBypass.Address10), &OriginalAddress10, sizeof(OriginalAddress10), 0);
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.AntiCheatBypass.Address11), &OriginalAddress11, sizeof(OriginalAddress11), 0);
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.AntiCheatBypass.Address12), &OriginalAddress12, sizeof(OriginalAddress12), 0);
	}
}

void cCheats::ForceVisibility() {
	static const char Patch1[] = { 0xB0, 0x01, 0x90 };
	static const char Patch2[] = { 0x90, 0x90, 0x90, 0x90, 0x90, 0x90 };

	static const char OriginalAddress1[] = { 0x8A, 0x45, 0x08 };
	static const char OriginalAddress2[] = { 0x0F, 0x84, 0xCB, 0x00, 0x00, 0x00 };

	if (Configuration.ForceVisibility) {
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetLibCocosModule() + Offsets.ForceVisibility.Address1), &Patch1, sizeof(Patch1), 0);
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetLibCocosModule() + Offsets.ForceVisibility.Address2), &Patch2, sizeof(Patch2), 0);
	}
	else {
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetLibCocosModule() + Offsets.ForceVisibility.Address1), &OriginalAddress1, sizeof(OriginalAddress1), 0);
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetLibCocosModule() + Offsets.ForceVisibility.Address2), &OriginalAddress2, sizeof(OriginalAddress2), 0);
	}
}

void cCheats::UnlimitedFps() {
	static const char Patch[] = { 0xEB };

	static const char OriginalAddress1[] = { 0x75 };

	if (Configuration.UnlimitedFps) {
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetLibCocosModule() + Offsets.UnlimitedFps.Address1), &Patch, sizeof(Patch), 0);
	}
	else {
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetLibCocosModule() + Offsets.UnlimitedFps.Address1), &OriginalAddress1, sizeof(OriginalAddress1), 0);
	}
}

void cCheats::NoRotation() {
	static const char Patch[] = { 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90 };

	static const char OriginalAddress1[] = { 0xF3, 0x0F, 0x11, 0x49, 0x24, 0xF3, 0x0F, 0x11, 0x49, 0x20 };

	if (Configuration.NoRotation) {
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetLibCocosModule() + Offsets.NoRotation.Address1), &Patch, sizeof(Patch), 0);
	}
	else {
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetLibCocosModule() + Offsets.NoRotation.Address1), &OriginalAddress1, sizeof(OriginalAddress1), 0);
	}
}

void cCheats::FreeResize() {
	static const char Patch1[] = { 0x90, 0x90, 0x90, 0x90, 0x90 };
	static const char Patch2[] = { 0xB9, 0xFF, 0xFF, 0xFF, 0x7F, 0x90, 0x90 };
	static const char Patch3[] = { 0x48 };
	static const char Patch4[] = { 0x48 };
	static const char Patch5[] = { 0xEB, 0x11, 0x90 };

	static const char OriginalAddress1[] = { 0xE8, 0xB0, 0xF3, 0xFF, 0xFF };
	static const char OriginalAddress2[] = { 0xE8, 0xEE, 0xF6, 0xFF, 0xFF, 0x8B, 0xC8 };
	static const char OriginalAddress3[] = { 0x50 };
	static const char OriginalAddress4[] = { 0x50 };
	static const char OriginalAddress5[] = { 0x50, 0x6A, 0x00 };

	if (Configuration.FreeResize) {
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetLibCocosModule() + Offsets.FreeResize.Address1), &Patch1, sizeof(Patch1), 0);
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetLibCocosModule() + Offsets.FreeResize.Address2), &Patch2, sizeof(Patch2), 0);
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetLibCocosModule() + Offsets.FreeResize.Address3), &Patch3, sizeof(Patch3), 0);
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetLibCocosModule() + Offsets.FreeResize.Address4), &Patch4, sizeof(Patch4), 0);
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetLibCocosModule() + Offsets.FreeResize.Address5), &Patch5, sizeof(Patch5), 0);
	}
	else {
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetLibCocosModule() + Offsets.FreeResize.Address1), &OriginalAddress1, sizeof(OriginalAddress1), 0);
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetLibCocosModule() + Offsets.FreeResize.Address2), &OriginalAddress2, sizeof(OriginalAddress2), 0);
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetLibCocosModule() + Offsets.FreeResize.Address3), &OriginalAddress3, sizeof(OriginalAddress3), 0);
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetLibCocosModule() + Offsets.FreeResize.Address4), &OriginalAddress4, sizeof(OriginalAddress4), 0);
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetLibCocosModule() + Offsets.FreeResize.Address5), &OriginalAddress5, sizeof(OriginalAddress5), 0);
	}
}
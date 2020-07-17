#include <Windows.h>

#include "Cheats.h"
#include "../Game/Game.h"
#include "../Game/Offsets.h"

void cCheats::CopyHack() {
	static const char Patch1[] = { 0x90, 0x90 };
	static const char Patch2[] = { 0x8B, 0xCA, 0x90 };
	static const char Patch3[] = { 0xB0, 0x01, 0x90 };
	
	static const char OriginalAddress1[] = { 0x75, 0x0E };
	static const char OriginalAddress2[] = { 0x0F, 0x44, 0xCA };
	static const char OriginalAddress3[] = { 0x0F, 0x95, 0xC0 };

	if (Configuration.CopyHack) {
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.CopyHack.Address1), &Patch1, sizeof(Patch1), 0);
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.CopyHack.Address2), &Patch2, sizeof(Patch2), 0);
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.CopyHack.Address3), &Patch3, sizeof(Patch3), 0);
	}
	else {
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.CopyHack.Address1), &OriginalAddress1, sizeof(OriginalAddress1), 0);
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.CopyHack.Address2), &OriginalAddress2, sizeof(OriginalAddress2), 0);
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.CopyHack.Address3), &OriginalAddress3, sizeof(OriginalAddress3), 0);
	}
}

void cCheats::NoCopyMark() {
	static const char Patch1[] = { 0x2B, 0x87, 0xCC, 0x02, 0x00, 0x00 };
	static const char Patch2[] = { 0xEB, 0x26 };

	static const char OriginalAddress1[] = { 0x2B, 0x87, 0xD0, 0x02, 0x00, 0x00 };
	static const char OriginalAddress2[] = { 0x74, 0x26 };

	if (Configuration.NoCopyMark) {
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.NoCopyMark.Address1), &Patch1, sizeof(Patch1), 0);
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.NoCopyMark.Address2), &Patch2, sizeof(Patch2), 0);
	}
	else {
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.NoCopyMark.Address1), &OriginalAddress1, sizeof(OriginalAddress1), 0);
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.NoCopyMark.Address2), &OriginalAddress2, sizeof(OriginalAddress2), 0);
	}
}

void cCheats::UnlimitedObjects() {
	static const char Patch[] = { 0xFF, 0xFF, 0xFF, 0x7F };

	static const char OriginalAddresses[] = { 0x80, 0x38, 0x01, 0x00 };

	if (Configuration.UnlimitedObjects) {
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.UnlimitedObjects.Address1), &Patch, sizeof(Patch), 0);
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.UnlimitedObjects.Address2), &Patch, sizeof(Patch), 0);
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.UnlimitedObjects.Address3), &Patch, sizeof(Patch), 0);
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.UnlimitedObjects.Address4), &Patch, sizeof(Patch), 0);
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.UnlimitedObjects.Address5), &Patch, sizeof(Patch), 0);
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.UnlimitedObjects.Address6), &Patch, sizeof(Patch), 0);
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.UnlimitedObjects.Address7), &Patch, sizeof(Patch), 0);
	}
	else {
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.UnlimitedObjects.Address1), &OriginalAddresses, sizeof(OriginalAddresses), 0);
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.UnlimitedObjects.Address2), &OriginalAddresses, sizeof(OriginalAddresses), 0);
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.UnlimitedObjects.Address3), &OriginalAddresses, sizeof(OriginalAddresses), 0);
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.UnlimitedObjects.Address4), &OriginalAddresses, sizeof(OriginalAddresses), 0);
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.UnlimitedObjects.Address5), &OriginalAddresses, sizeof(OriginalAddresses), 0);
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.UnlimitedObjects.Address6), &OriginalAddresses, sizeof(OriginalAddresses), 0);
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.UnlimitedObjects.Address7), &OriginalAddresses, sizeof(OriginalAddresses), 0);
	}
}

void cCheats::UnlimitedCustomObjects() {
	static const char Patch1[] = { 0xEB };
	static const char Patch2[] = { 0xEB };
	static const char Patch3[] = { 0x90, 0x90 };

	static const char OriginalAddress1[] = { 0x72 };
	static const char OriginalAddress2[] = { 0x76 };
	static const char OriginalAddress3[] = { 0x77, 0x3A };

	if (Configuration.UnlimitedCustomObjects) {
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.UnlimitedCustomObjects.Address1), &Patch1, sizeof(Patch1), 0);
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.UnlimitedCustomObjects.Address2), &Patch2, sizeof(Patch2), 0);
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.UnlimitedCustomObjects.Address3), &Patch3, sizeof(Patch3), 0);
	}
	else {
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.UnlimitedCustomObjects.Address1), &OriginalAddress1, sizeof(OriginalAddress1), 0);
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.UnlimitedCustomObjects.Address2), &OriginalAddress2, sizeof(OriginalAddress2), 0);
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.UnlimitedCustomObjects.Address3), &OriginalAddress3, sizeof(OriginalAddress3), 0);
	}
}

void cCheats::UnlimitedZoom() {
	static const char Patch[] = { 0x90, 0x90, 0x90 };

	static const char OriginalAddress1[] = { 0x0F, 0x2F, 0xC8 };
	static const char OriginalAddress2[] = { 0x0F, 0x28, 0xC8 };
	static const char OriginalAddress3[] = { 0x0F, 0x2F, 0xC8 };
	static const char OriginalAddress4[] = { 0x0F, 0x28, 0xC8 };

	if (Configuration.UnlimitedZoom) {
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.UnlimitedZoom.Address1), &Patch, sizeof(Patch), 0);
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.UnlimitedZoom.Address2), &Patch, sizeof(Patch), 0);
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.UnlimitedZoom.Address3), &Patch, sizeof(Patch), 0);
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.UnlimitedZoom.Address4), &Patch, sizeof(Patch), 0);
	}
	else {
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.UnlimitedZoom.Address1), &OriginalAddress1, sizeof(OriginalAddress1), 0);
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.UnlimitedZoom.Address2), &OriginalAddress2, sizeof(OriginalAddress2), 0);
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.UnlimitedZoom.Address3), &OriginalAddress3, sizeof(OriginalAddress3), 0);
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.UnlimitedZoom.Address4), &OriginalAddress4, sizeof(OriginalAddress4), 0);
	}
}

void cCheats::UnlimitedToolboxButtons() {
	static const char Patch1[] = { 0x83, 0xF9, 0x01 };
	static const char Patch2[] = { 0xB8, 0x01, 0x00, 0x00, 0x00 };
	static const char Patch3[] = { 0x83, 0xF9, 0x7F };
	static const char Patch4[] = { 0xB9, 0x7F, 0x00, 0x00, 0x00 };

	static const char OriginalAddress1[] = { 0x83, 0xF9, 0x06 };
	static const char OriginalAddress2[] = { 0xB8, 0x06, 0x00, 0x00, 0x00 };
	static const char OriginalAddress3[] = { 0x83, 0xF9, 0x0C };
	static const char OriginalAddress4[] = { 0xB9, 0x0C, 0x00, 0x00, 0x00 };
	static const char OriginalAddress5[] = { 0x83, 0xF9, 0x02 };
	static const char OriginalAddress6[] = { 0xB8, 0x02, 0x00, 0x00, 0x00 };
	static const char OriginalAddress7[] = { 0x83, 0xF9, 0x03 };
	static const char OriginalAddress8[] = { 0xB9, 0x03, 0x00, 0x00, 0x00 };

	if (Configuration.UnlimitedToolboxButtons) {
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.UnlimitedToolboxButtons.Address1), &Patch1, sizeof(Patch1), 0);
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.UnlimitedToolboxButtons.Address2), &Patch2, sizeof(Patch2), 0);
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.UnlimitedToolboxButtons.Address3), &Patch3, sizeof(Patch3), 0);
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.UnlimitedToolboxButtons.Address4), &Patch4, sizeof(Patch4), 0);
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.UnlimitedToolboxButtons.Address5), &Patch1, sizeof(Patch1), 0);
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.UnlimitedToolboxButtons.Address6), &Patch2, sizeof(Patch2), 0);
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.UnlimitedToolboxButtons.Address7), &Patch3, sizeof(Patch3), 0);
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.UnlimitedToolboxButtons.Address8), &Patch4, sizeof(Patch4), 0);
	}
	else {
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.UnlimitedToolboxButtons.Address1), &OriginalAddress1, sizeof(OriginalAddress1), 0);
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.UnlimitedToolboxButtons.Address2), &OriginalAddress2, sizeof(OriginalAddress2), 0);
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.UnlimitedToolboxButtons.Address3), &OriginalAddress3, sizeof(OriginalAddress3), 0);
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.UnlimitedToolboxButtons.Address4), &OriginalAddress4, sizeof(OriginalAddress4), 0);
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.UnlimitedToolboxButtons.Address5), &OriginalAddress5, sizeof(OriginalAddress5), 0);
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.UnlimitedToolboxButtons.Address6), &OriginalAddress6, sizeof(OriginalAddress6), 0);
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.UnlimitedToolboxButtons.Address7), &OriginalAddress7, sizeof(OriginalAddress7), 0);
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.UnlimitedToolboxButtons.Address8), &OriginalAddress8, sizeof(OriginalAddress8), 0);
	}
}

void cCheats::VerifyHack() {
	static const char Patch[] = { 0xEB };

	static const char OriginalAddress1[] = { 0x74 };

	if (Configuration.VerifyHack) {
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.VerifyHack.Address1), &Patch, sizeof(Patch), 0);
	}
	else {
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.VerifyHack.Address1), &OriginalAddress1, sizeof(OriginalAddress1), 0);
	}
}

void cCheats::HiddenSongs() {
	static const char Patch1[] = { 0x90, 0x90 };
	static const char Patch2[] = { 0x90, 0x90, 0x90 };

	static const char OriginalAddress1[] = { 0x74, 0x2F };
	static const char OriginalAddress2[] = { 0x0F, 0x4F, 0xC6 };

	if (Configuration.HiddenSongs) {
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.HiddenSongs.Address1), &Patch1, sizeof(Patch1), 0);
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.HiddenSongs.Address2), &Patch2, sizeof(Patch2), 0);
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.HiddenSongs.Address3), &Patch1, sizeof(Patch1), 0);
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.HiddenSongs.Address4), &Patch2, sizeof(Patch2), 0);
	}
	else {
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.HiddenSongs.Address1), &OriginalAddress1, sizeof(OriginalAddress1), 0);
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.HiddenSongs.Address2), &OriginalAddress2, sizeof(OriginalAddress2), 0);
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.HiddenSongs.Address3), &OriginalAddress1, sizeof(OriginalAddress1), 0);
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.HiddenSongs.Address4), &OriginalAddress2, sizeof(OriginalAddress2), 0);
	}
}

void cCheats::EditorLength() {
	static const char Patch1[] = { 0x00, 0x60, 0xEA, 0x4B };
	static const char Patch2[] = { 0x0F, 0x60, 0xEA, 0x4B };

	static const char OriginalAddress1[] = { 0x00, 0x60, 0x6A, 0x48 };
	static const char OriginalAddress2[] = { 0x80, 0x67, 0x6A, 0x48 };

	if (Configuration.EditorLength) {
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.EditorLength.Address1), &Patch1, sizeof(Patch1), 0);
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.EditorLength.Address2), &Patch2, sizeof(Patch2), 0);
	}
	else {
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.EditorLength.Address1), &OriginalAddress1, sizeof(OriginalAddress1), 0);
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.EditorLength.Address2), &OriginalAddress2, sizeof(OriginalAddress2), 0);
	}
}

void cCheats::PlaceOver() {
	static const char Patch1[] = { 0x8B, 0xC1, 0x90 };
	static const char Patch2[] = { 0xE9, 0x23, 0x02, 0x00, 0x00, 0x90 };

	static const char OriginalAddress1[] = { 0x0F, 0x48, 0xC1 };
	static const char OriginalAddress2[] = { 0x0F, 0x8F, 0x22, 0x02, 0x00, 0x00 };

	if (Configuration.PlaceOver) {
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.PlaceOver.Address1), &Patch1, sizeof(Patch1), 0);
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.PlaceOver.Address2), &Patch2, sizeof(Patch2), 0);
	}
	else {
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.PlaceOver.Address1), &OriginalAddress1, sizeof(OriginalAddress1), 0);
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.PlaceOver.Address2), &OriginalAddress2, sizeof(OriginalAddress2), 0);
	}
}

void cCheats::AntiTestmode() {
	static const char Patch[] = { 0xE9, 0xB7, 0x00, 0x00, 0x00, 0x90 };

	static const char OriginalAddress1[] = { 0x0F, 0x84, 0xB6, 0x00, 0x00, 0x00 };

	if (Configuration.AntiTestmode) {
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.AntiTestmode.Address1), &Patch, sizeof(Patch), 0);
	}
	else {
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.AntiTestmode.Address1), &OriginalAddress1, sizeof(OriginalAddress1), 0);
	}
}

void cCheats::RotationHack() {
	static const char Patch[] = { 0xB8, 0x01, 0x00, 0x00, 0x00, 0x90 };

	static const char OriginalAddress1[] = { 0x8B, 0x80, 0x00, 0x03, 0x00, 0x00 };
	static const char OriginalAddress2[] = { 0x8B, 0x80, 0x00, 0x03, 0x00, 0x00 };
	static const char OriginalAddress3[] = { 0x8B, 0x80, 0x00, 0x03, 0x00, 0x00 };
	static const char OriginalAddress4[] = { 0x8B, 0x87, 0x00, 0x03, 0x00, 0x00 };
	static const char OriginalAddress5[] = { 0x8B, 0x86, 0x00, 0x03, 0x00, 0x00 };
	static const char OriginalAddress6[] = { 0x8B, 0x83, 0x00, 0x03, 0x00, 0x00 };

	if (Configuration.RotationHack) {
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.RotationHack.Address1), &Patch, sizeof(Patch), 0);
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.RotationHack.Address2), &Patch, sizeof(Patch), 0);
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.RotationHack.Address3), &Patch, sizeof(Patch), 0);
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.RotationHack.Address4), &Patch, sizeof(Patch), 0);
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.RotationHack.Address5), &Patch, sizeof(Patch), 0);
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.RotationHack.Address6), &Patch, sizeof(Patch), 0);
	}
	else {
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.RotationHack.Address1), &OriginalAddress1, sizeof(OriginalAddress1), 0);
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.RotationHack.Address2), &OriginalAddress2, sizeof(OriginalAddress2), 0);
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.RotationHack.Address3), &OriginalAddress3, sizeof(OriginalAddress3), 0);
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.RotationHack.Address4), &OriginalAddress4, sizeof(OriginalAddress4), 0);
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.RotationHack.Address5), &OriginalAddress5, sizeof(OriginalAddress5), 0);
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.RotationHack.Address6), &OriginalAddress6, sizeof(OriginalAddress6), 0);
	}
}

void cCheats::FreeScroll() {
	static const char Patch[] = { 0xEB };

	static const char OriginalAddresses[] = { 0x77 };

	if (Configuration.FreeScroll) {
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.FreeScroll.Address1), &Patch, sizeof(Patch), 0);
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.FreeScroll.Address2), &Patch, sizeof(Patch), 0);
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.FreeScroll.Address3), &Patch, sizeof(Patch), 0);
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.FreeScroll.Address4), &Patch, sizeof(Patch), 0);
	}
	else {
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.FreeScroll.Address1), &OriginalAddresses, sizeof(OriginalAddresses), 0);
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.FreeScroll.Address2), &OriginalAddresses, sizeof(OriginalAddresses), 0);
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.FreeScroll.Address3), &OriginalAddresses, sizeof(OriginalAddresses), 0);
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.FreeScroll.Address4), &OriginalAddresses, sizeof(OriginalAddresses), 0);
	}
}

void cCheats::NoEditorUI() {
	static const char Patch[] = { 0xB3, 0x00, 0x90 };

	static const char OriginalAddress1[] = { 0x0F, 0x44, 0xD9 };

	if (Configuration.NoEditorUI) {
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.NoEditorUI.Address1), &Patch, sizeof(Patch), 0);
	}
	else {
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.NoEditorUI.Address1), &OriginalAddress1, sizeof(OriginalAddress1), 0);
	}
}

void cCheats::UnlimitedZOrder() {
	static const char Patch[] = { 0x90, 0x90, 0x90 };

	static const char OriginalAddress1[] = { 0x0F, 0x4C, 0xC1 };
	static const char OriginalAddress2[] = { 0x0F, 0x4F, 0xC1 };

	if (Configuration.UnlimitedZOrder) {
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.UnlimitedZOrder.Address1), &Patch, sizeof(Patch), 0);
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.UnlimitedZOrder.Address2), &Patch, sizeof(Patch), 0);
	}
	else {
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.UnlimitedZOrder.Address1), &OriginalAddress1, sizeof(OriginalAddress1), 0);
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.UnlimitedZOrder.Address2), &OriginalAddress2, sizeof(OriginalAddress2), 0);
	}
}

void cCheats::AbsoluteScaling() {
	static const char Patch[] = { 0x90, 0x90, 0x90, 0x90, 0x90, 0x90 };

	static const char OriginalAddress1[] = { 0x56, 0xE8, 0xB1, 0xEA, 0xFF, 0xFF };

	if (Configuration.AbsoluteScaling) {
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.AbsoluteScaling.Address1), &Patch, sizeof(Patch), 0);
	}
	else {
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.AbsoluteScaling.Address1), &OriginalAddress1, sizeof(OriginalAddress1), 0);
	}
}

void cCheats::AbsolutePosition() {
	static const char Patch[] = { 0x90, 0x8B, 0xCE, 0x90, 0x90, 0x90 };

	static const char OriginalAddress1[] = { 0x51, 0x8B, 0xCE, 0xFF, 0x50, 0x5C };

	if (Configuration.AbsolutePosition) {
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.AbsolutePosition.Address1), &Patch, sizeof(Patch), 0);
	}
	else {
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.AbsolutePosition.Address1), &OriginalAddress1, sizeof(OriginalAddress1), 0);
	}
}

void cCheats::NoScaleSnap() {
	static const char Patch[] = { 0xEB };

	static const char OriginalAddress1[] = { 0x76 };

	if (Configuration.NoScaleSnap) {
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.NoScaleSnap.Address1), &Patch, sizeof(Patch), 0);
	}
	else {
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.NoScaleSnap.Address1), &OriginalAddress1, sizeof(OriginalAddress1), 0);
	}
}
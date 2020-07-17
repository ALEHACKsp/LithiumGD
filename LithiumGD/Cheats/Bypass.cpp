#include <Windows.h>

#include "Cheats.h"
#include "../Game/Game.h"
#include "../Game/Offsets.h"

void cCheats::UnlockIcons() {
	static const char Patch[] = { 0xB0, 0x1, 0x90, 0x90, 0x90 };

	static const char OriginalAddress1[] = { 0xE8, 0x7A, 0xCD, 0x19, 0x00 };
	static const char OriginalAddress2[] = { 0xE8, 0x68, 0xC9, 0x19, 0x00 };

	if (Configuration.UnlockIcons) {
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.UnlockIcons.Address1), &Patch, sizeof(Patch), 0);
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.UnlockIcons.Address2), &Patch, sizeof(Patch), 0);
	}
	else {
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.UnlockIcons.Address1), &OriginalAddress1, sizeof(OriginalAddress1), 0);
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.UnlockIcons.Address2), &OriginalAddress2, sizeof(OriginalAddress2), 0);
	}
}

void cCheats::TextLength() {
	static const char Patch[] = { 0xEB, 0x04 };

	static const char OriginalAddress1[] = { 0x7C, 0x04 };

	if (Configuration.TextLength) {
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.TextLength.Address1), &Patch, sizeof(Patch), 0);
	}
	else {
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.TextLength.Address1), &OriginalAddress1, sizeof(OriginalAddress1), 0);
	}
}

void cCheats::CustomCharacters() {
	static const char Patch[] = { 0x90, 0x90 };

	static const char OriginalAddress1[] = { 0x75, 0x04 };

	if (Configuration.CustomCharacters) {
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.CustomCharacters.Address1), &Patch, sizeof(Patch), 0);
	}
	else {
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.CustomCharacters.Address1), &OriginalAddress1, sizeof(OriginalAddress1), 0);
	}
}

void cCheats::SliderLimit() {
	static const char Patch[] = { 0xEB };

	static const char OriginalAdddress1[] = { 0x76 };
	static const char OriginalAdddress2[] = { 0x76 };

	if (Configuration.SliderLimit) {
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.SliderLimit.Address1), &Patch, sizeof(Patch), 0);
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.SliderLimit.Address2), &Patch, sizeof(Patch), 0);
	}
	else {
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.SliderLimit.Address1), &OriginalAdddress1, sizeof(OriginalAdddress1), 0);
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.SliderLimit.Address2), &OriginalAdddress2, sizeof(OriginalAdddress2), 0);
	}
}

void cCheats::DemonLevels() {
	static const char Patch[] = { 0xE9, 0x8A, 0x00, 0x00, 0x00, 0x90 };

	static const char OriginalAddress1[] = { 0x0F, 0x8E, 0x89, 0x00, 0x00, 0x00 };

	if (Configuration.DemonLevels) {
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.DemonLevels.Address1), &Patch, sizeof(Patch), 0);
	}
	else {
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.DemonLevels.Address1), &OriginalAddress1, sizeof(OriginalAddress1), 0);
	}
}

void cCheats::GuardVault() {
	static const char Patch[] = { 0x90, 0x90 };

	static const char OriginalAddress1[] = { 0x7C, 0x4A };

	if (Configuration.GuardVault) {
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.GuardVault.Address1), &Patch, sizeof(Patch), 0);
	}
	else {
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.GuardVault.Address1), &OriginalAddress1, sizeof(OriginalAddress1), 0);
	}
}

void cCheats::KeymasterVault() {
	static const char Patch[] = { 0x90, 0x90 };

	static const char OriginalAddress1[] = { 0x74, 0x4A };

	if (Configuration.KeymasterVault) {
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.KeymasterVault.Address1), &Patch, sizeof(Patch), 0);
	}
	else {
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.KeymasterVault.Address1), &OriginalAddress1, sizeof(OriginalAddress1), 0);
	}
}

void cCheats::KeymasterBasement() {
	static const char Patch[] = { 0x90, 0x90 };

	static const char OriginalAddress1[] = { 0x74, 0x4A };

	if (Configuration.KeymasterBasement) {
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.KeymasterBasement.Address1), &Patch, sizeof(Patch), 0);
	}
	else {
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.KeymasterBasement.Address1), &OriginalAddress1, sizeof(OriginalAddress1), 0);
	}
}

void cCheats::BasementKeys() {
	static const char Patch1[] = { 0xE9, 0x59, 0x01, 0x00, 0x00, 0x90 };
	static const char Patch2[] = { 0xE9, 0x30, 0x02, 0x00, 0x00, 0x90 };

	static const char OriginalAddress1[] = { 0x0F, 0x85, 0x58, 0x01, 0x00, 0x00 };
	static const char OriginalAddress2[] = { 0x0F, 0x85, 0x58, 0x01, 0x00, 0x00 };
	static const char OriginalAddress3[] = { 0x0F, 0x85, 0x2F, 0x02, 0x00, 0x00 };

	if (Configuration.BasementKeys) {
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.BasementKeys.Address1), &Patch1, sizeof(Patch1), 0);
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.BasementKeys.Address2), &Patch1, sizeof(Patch1), 0);
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.BasementKeys.Address3), &Patch2, sizeof(Patch2), 0);
	}
	else {
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.BasementKeys.Address1), &OriginalAddress1, sizeof(OriginalAddress1), 0);
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.BasementKeys.Address2), &OriginalAddress2, sizeof(OriginalAddress2), 0);
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.BasementKeys.Address3), &OriginalAddress3, sizeof(OriginalAddress3), 0);
	}
}

void cCheats::Challenge() {
	static const char Patch[] = { 0x90, 0x90, 0x90, 0x90, 0x90, 0x90 };

	static const char OriginalAddress1[] = { 0x0F, 0x84, 0x87, 0x00, 0x00, 0x00 };

	if (Configuration.Challenge) {
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.Challenge.Address1), &Patch, sizeof(Patch), 0);
	}
	else {
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.Challenge.Address1), &OriginalAddress1, sizeof(OriginalAddress1), 0);
	}
}

void cCheats::TreasureRoom() {
	static const char Patch[] = { 0x90, 0x90 };

	static const char OriginalAddress1[] = { 0x74, 0x4A };

	if (Configuration.TreasureRoom) {
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.TreasureRoom.Address1), &Patch, sizeof(Patch), 0);
	}
	else {
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.TreasureRoom.Address1), &OriginalAddress1, sizeof(OriginalAddress1), 0);
	}
}

void cCheats::PotborShop() {
	static const char Patch[] = { 0x90, 0x90, 0x90, 0x90, 0x90, 0x90 };

	static const char OriginalAddress1[] = { 0x0F, 0x8C, 0xB4, 0x01, 0x00, 0x00 };

	if (Configuration.PotborShop) {
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.PotborShop.Address1), &Patch, sizeof(Patch), 0);
	}
	else {
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.PotborShop.Address1), &OriginalAddress1, sizeof(OriginalAddress1), 0);
	}
}

void cCheats::ScratchShop() {
	static const char Patch[] = { 0x90, 0x90, 0x90, 0x90, 0x90, 0x90 };

	static const char OriginalAddress1[] = { 0x0F, 0x8C, 0xAF, 0x01, 0x00, 0x00 };

	if (Configuration.ScratchShop) {
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.ScratchShop.Address1), &Patch, sizeof(Patch), 0);
	}
	else {
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.ScratchShop.Address1), &OriginalAddress1, sizeof(OriginalAddress1), 0);
	}
}

void cCheats::ManaOrbs() {
	static const char Patch[] = { 0x90, 0x31, 0xF6, 0x89, 0xB3, 0x10, 0x01, 0x00, 0x00, 0x89, 0xB3, 0x14, 0x01, 0x00, 0x00, 0xE8, 0x03, 0x6B, 0xFA, 0xFF, 0x8B, 0xC8, 0xE8, 0x2C, 0x82, 0xFA, 0xFF, 0x90 };

	static const char OriginalAddress1[] = { 0x2B, 0xB3, 0x10, 0x01, 0x00, 0x00, 0x2B, 0xB3, 0x14, 0x01, 0x00, 0x00, 0xE8, 0x06, 0x6B, 0xFA, 0xFF, 0x8B, 0xC8, 0xE8, 0x2F, 0x82, 0xFA, 0xFF, 0x3B, 0xF0, 0x7F, 0x25 };

	if (Configuration.ManaOrbs) {
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.ManaOrbs.Address1), &Patch, sizeof(Patch), 0);
	}
	else {
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.ManaOrbs.Address1), &OriginalAddress1, sizeof(OriginalAddress1), 0);
	}
}

void cCheats::GatekeeperVault() {
	static const char Patch1[] = { 0x90, 0x90 };
	static const char Patch2[] = { 0x90, 0x90, 0x90, 0x90, 0x90, 0x90 };

	static const char OriginalAddress1[] = { 0x74, 0x61 };
	static const char OriginalAddress2[] = { 0x0F, 0x84, 0xFC, 0x00, 0x00, 0x00 };

	if (Configuration.GatekeeperVault) {
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.GatekeeperVault.Address1), &Patch1, sizeof(Patch1), 0);
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.GatekeeperVault.Address2), &Patch2, sizeof(Patch2), 0);
	}
	else {
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.GatekeeperVault.Address1), &OriginalAddress1, sizeof(OriginalAddress1), 0);
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.GatekeeperVault.Address2), &OriginalAddress2, sizeof(OriginalAddress2), 0);
	}
}

void cCheats::BackupStars() {
	static const char Patch[] = { 0xEB, 0x3E };

	static const char OriginalAddress1[] = { 0x7D, 0x3E };

	if (Configuration.BackupStars) {
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.BackupStars.Address1), &Patch, sizeof(Patch), 0);
	}
	else {
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.BackupStars.Address1), &OriginalAddress1, sizeof(OriginalAddress1), 0);
	}
}
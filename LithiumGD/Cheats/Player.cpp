#include <Windows.h>

#include "Cheats.h"
#include "../Game/Game.h"
#include "../Game/Offsets.h"

void cCheats::Noclip() {
	static const char Patch[] = { 0xE9, 0x79, 0x06, 0x00, 0x00 };

	static const char OriginalAddress1[] = { 0x6A, 0x14, 0x8B, 0xCB, 0xFF };

	if (Configuration.Noclip) {
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.Noclip.Address1), &Patch, sizeof(Patch), 0);
	}
	else {
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.Noclip.Address1), &OriginalAddress1, sizeof(OriginalAddress1), 0);
	}
}

void cCheats::NoSpikes() {
	static const char Patch[] = { 0x75 };

	static const char OriginalAddress1[] = { 0x74 };

	if (Configuration.NoSpikes) {
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.NoSpikes.Address1), &Patch, sizeof(Patch), 0);
	}
	else {
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.NoSpikes.Address1), &OriginalAddress1, sizeof(OriginalAddress1), 0);
	}
}

void cCheats::NoHitbox() {
	static const char Patch[] = { 0xB8, 0x07, 0x00, 0x00, 0x00, 0x90 };

	static const char OriginalAddress1[] = { 0x8B, 0x83, 0x00, 0x03, 0x00, 0x00 };

	if (Configuration.NoHitbox) {
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.NoHitbox.Address1), &Patch, sizeof(Patch), 0);
	}
	else {
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.NoHitbox.Address1), &OriginalAddress1, sizeof(OriginalAddress1), 0);
	}
}

void cCheats::NoSolids() {
	static const char Patch[] = { 0xB8, 0x14, 0x00, 0x00, 0x00, 0x90 };

	static const char OriginalAddress1[] = { 0x8B, 0x83, 0x00, 0x03, 0x00, 0x00 };

	if (Configuration.NoSolids) {
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.NoSolids.Address1), &Patch, sizeof(Patch), 0);
	}
	else {
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.NoSolids.Address1), &OriginalAddress1, sizeof(OriginalAddress1), 0);
	}
}

void cCheats::ForceBlock() {
	static const char Patch[] = { 0x31, 0xC0, 0x83, 0x7B, 0x34, 0x00, 0xBA, 0x07, 0x00, 0x00, 0x00, 0x0F, 0x44, 0xC2, 0x90 };

	static const char OriginalAddress1[] = { 0x8B, 0x83, 0x00, 0x03, 0x00, 0x00, 0x83, 0xF8, 0x07, 0x0F, 0x84, 0x7F, 0x0A, 0x00, 0x00 };

	if (Configuration.ForceBlock) {
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.ForceBlock.Address1), &Patch, sizeof(Patch), 0);
	}
	else {
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.ForceBlock.Address1), &OriginalAddress1, sizeof(OriginalAddress1), 0);
	}
}

void cCheats::EverythingHurts() {
	static const char Patch[] = { 0xB8, 0x02, 0x00, 0x00, 0x00, 0x90 };

	static const char OriginalAddress1[] = { 0x8B, 0x83, 0x00, 0x03, 0x00, 0x00 };

	if (Configuration.EverythingHurts) {
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.EverythingHurts.Address1), &Patch, sizeof(Patch), 0);
	}
	else {
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.EverythingHurts.Address1), &OriginalAddress1, sizeof(OriginalAddress1), 0);
	}
}

void cCheats::FreezePlayer() {
	static const char Patch[] = { 0x90, 0x90, 0x90 };

	static const char OriginalAddress1[] = { 0x50, 0xFF, 0xD6 };

	if (Configuration.FreezePlayer) {
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.FreezePlayer.Address1), &Patch, sizeof(Patch), 0);
	}
	else {
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.FreezePlayer.Address1), &OriginalAddress1, sizeof(OriginalAddress1), 0);
	}
}

void cCheats::AirJump() {
	static const char Patch[] = { 0x01 };

	static const char OriginalAddresses[] = { 0x00 };

	if (Configuration.AirJump) {
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.AirJump.Address1), &Patch, sizeof(Patch), 0);
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.AirJump.Address2), &Patch, sizeof(Patch), 0);
	}
	else {
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.AirJump.Address1), &OriginalAddresses, sizeof(OriginalAddresses), 0);
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.AirJump.Address2), &OriginalAddresses, sizeof(OriginalAddresses), 0);
	}
}

void cCheats::TrailAlwaysOn() {
	static const char Patch[] = { 0x90, 0x90, 0x90, 0x90, 0x90, 0x90 };

	static const char OriginalAddress1[] = { 0x0F, 0x84, 0x68, 0x02, 0x00, 0x00 };

	if (Configuration.TrailAlwaysOn) {
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetLibCocosModule() + Offsets.Trail.Address1), &Patch, sizeof(Patch), 0);
	}
	else {
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetLibCocosModule() + Offsets.Trail.Address1), &OriginalAddress1, sizeof(OriginalAddress1), 0);
	}
}

void cCheats::TrailAlwaysOff() {
	static const char Patch[] = { 0xE9, 0x69, 0x02, 0x00, 0x00, 0x90 };

	static const char OriginalAddress1[] = { 0x0F, 0x84, 0x68, 0x02, 0x00, 0x00 };

	if (Configuration.TrailAlwaysOff) {
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetLibCocosModule() + Offsets.Trail.Address1), &Patch, sizeof(Patch), 0);
	}
	else {
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetLibCocosModule() + Offsets.Trail.Address1), &OriginalAddress1, sizeof(OriginalAddress1), 0);
	}
}

void cCheats::InversedTrail() {
	static const char Patch[] = { 0x0F, 0x85, 0x68, 0x02, 0x00, 0x00 };

	static const char OriginalAddress1[] = { 0x0F, 0x84, 0x68, 0x02, 0x00, 0x00 };

	if (Configuration.InversedTrail) {
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetLibCocosModule() + Offsets.Trail.Address1), &Patch, sizeof(Patch), 0);
	}
	else {
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetLibCocosModule() + Offsets.Trail.Address1), &OriginalAddress1, sizeof(OriginalAddress1), 0);
	}
}

void cCheats::PracticeMusicHack() {
	static const char Patch1[] = { 0x90, 0x90, 0x90, 0x90, 0x90, 0x90 };
	static const char Patch2[] = { 0x90, 0x90 };

	static const char OriginalAddress1[] = { 0x0F, 0x85, 0xF7, 0x00, 0x00, 0x00 };
	static const char OriginalAddress2[] = { 0x75, 0x41 };
	static const char OriginalAddress3[] = { 0x75, 0x3E };
	static const char OriginalAddress4[] = { 0x75, 0x0C };

	if (Configuration.PracticeMusicHack) {
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.PracticeMusicHack.Address1), &Patch1, sizeof(Patch1), 0);
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.PracticeMusicHack.Address2), &Patch2, sizeof(Patch2), 0);
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.PracticeMusicHack.Address3), &Patch2, sizeof(Patch2), 0);
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.PracticeMusicHack.Address4), &Patch2, sizeof(Patch2), 0);
	}
	else {
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.PracticeMusicHack.Address1), &OriginalAddress1, sizeof(OriginalAddress1), 0);
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.PracticeMusicHack.Address2), &OriginalAddress2, sizeof(OriginalAddress2), 0);
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.PracticeMusicHack.Address3), &OriginalAddress3, sizeof(OriginalAddress3), 0);
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.PracticeMusicHack.Address4), &OriginalAddress4, sizeof(OriginalAddress4), 0);
	}
}

void cCheats::Suicide() {
	static const char Patch1[] = { 0xE9, 0x57, 0x02, 0x00, 0x00, 0x90 };
	static const char Patch2[] = { 0xE9, 0x27, 0x02, 0x00, 0x00, 0x90 };

	static const char OriginalAddress1[] = { 0x0F, 0x86, 0x56, 0x02, 0x00, 0x00 };
	static const char OriginalAddress2[] = { 0x0F, 0x87, 0x26, 0x02, 0x00, 0x00 };

	if (Configuration.Suicide) {
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.Suicide.Address1), &Patch1, sizeof(Patch1), 0);
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.Suicide.Address2), &Patch2, sizeof(Patch2), 0);
	}
	else {
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.Suicide.Address1), &OriginalAddress1, sizeof(OriginalAddress1), 0);
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.Suicide.Address2), &OriginalAddress2, sizeof(OriginalAddress2), 0);
	}
}

void cCheats::NoParticles() {
	static const char Patch[] = { 0x00 };

	static const char OriginalAddress1[] = { 0x01 };

	if (Configuration.NoParticles) {
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetLibCocosModule() + Offsets.NoParticles.Address1), &Patch, sizeof(Patch), 0);
	}
	else {
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetLibCocosModule() + Offsets.NoParticles.Address1), &OriginalAddress1, sizeof(OriginalAddress1), 0);
	}
}

void cCheats::NoPauseButton() {
	static const char Patch[] = { 0x90, 0x90 };

	static const char OriginalAddress1[] = { 0x75, 0x10 };

	if (Configuration.NoPauseButton) {
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.NoPauseButton.Address1), &Patch, sizeof(Patch), 0);
	}
	else {
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.NoPauseButton.Address1), &OriginalAddress1, sizeof(OriginalAddress1), 0);
	}
}

void cCheats::NoGlow() {
	static const char Patch[] = { 0x90, 0x90 };

	static const char OriginalAddress1[] = { 0x74, 0x0D };

	if (Configuration.NoGlow) {
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.NoGlow.Address1), &Patch, sizeof(Patch), 0);
	}
	else {
		WriteProcessMemory(Game->GetProcessHandle(), (LPVOID)(Game->GetGeometryDashModule() + Offsets.NoGlow.Address1), &OriginalAddress1, sizeof(OriginalAddress1), 0);
	}
}
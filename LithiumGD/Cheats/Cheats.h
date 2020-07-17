#pragma once

class cCheats {
public:
	void UnlockIcons();
	void TextLength();
	void CustomCharacters();
	void SliderLimit();
	void DemonLevels();
	void GuardVault();
	void KeymasterVault();
	void KeymasterBasement();
	void BasementKeys();
	void Challenge();
	void TreasureRoom();
	void PotborShop();
	void ScratchShop();
	void ManaOrbs();
	void GatekeeperVault();
	void BackupStars();
	
	void CopyHack();
	void NoCopyMark();
	void UnlimitedObjects();
	void UnlimitedCustomObjects();
	void UnlimitedZoom();
	void UnlimitedToolboxButtons();
	void VerifyHack();
	void HiddenSongs();
	void EditorLength();
	void PlaceOver();
	void AntiTestmode();
	void RotationHack();
	void FreeScroll();
	void NoEditorUI();
	void UnlimitedZOrder();
	void AbsoluteScaling();
	void AbsolutePosition();
	void NoScaleSnap();

	void Noclip();
	void NoSpikes();
	void NoHitbox();
	void NoSolids();
	void ForceBlock();
	void EverythingHurts();
	void FreezePlayer();
	void AirJump();
	void TrailAlwaysOn();
	void TrailAlwaysOff();
	void InversedTrail();
	void PracticeMusicHack();
	void Suicide();
	void NoParticles();
	void NoPauseButton();
	void NoGlow();

	void AntiCheatBypass();
	void ForceVisibility();
	void UnlimitedFps();
	void NoRotation();
	void FreeResize();

	struct {
		bool UnlockIcons{ false };
		bool TextLength{ false };
		bool CustomCharacters{ false };
		bool SliderLimit{ false };
		bool DemonLevels{ false };
		bool GuardVault{ false };
		bool KeymasterVault{ false };
		bool KeymasterBasement{ false };
		bool BasementKeys{ false };
		bool Challenge{ false };
		bool TreasureRoom{ false };
		bool PotborShop{ false };
		bool ScratchShop{ false };
		bool ManaOrbs{ false };
		bool GatekeeperVault{ false };
		bool BackupStars{ false };

		bool CopyHack{ false };
		bool NoCopyMark{ false };
		bool UnlimitedObjects{ false };
		bool UnlimitedCustomObjects{ false };
		bool UnlimitedZoom{ false };
		bool UnlimitedToolboxButtons{ false };
		bool VerifyHack{ false };
		bool HiddenSongs{ false };
		bool EditorLength{ false };
		bool PlaceOver{ false };
		bool AntiTestmode{ false };
		bool RotationHack{ false };
		bool FreeScroll{ false };
		bool NoEditorUI{ false };
		bool UnlimitedZOrder{ false };
		bool AbsoluteScaling{ false };
		bool AbsolutePosition{ false };
		bool NoScaleSnap{ false };

		bool Noclip{ false };
		bool NoSpikes{ false };
		bool NoHitbox{ false };
		bool NoSolids{ false };
		bool ForceBlock{ false };
		bool EverythingHurts{ false };
		bool FreezePlayer{ false };
		bool AirJump{ false };
		bool TrailAlwaysOn{ false };
		bool TrailAlwaysOff{ false };
		bool InversedTrail{ false };
		bool PracticeMusicHack{ false };
		bool Suicide{ false };
		bool NoParticles{ false };
		bool NoPauseButton{ false };
		bool NoGlow{ false };

		bool AntiCheatBypass{ false };
		bool ForceVisibility{ false };
		bool UnlimitedFps{ false };
		bool NoRotation{ false };
		bool FreeResize{ false };
	} Configuration;
};
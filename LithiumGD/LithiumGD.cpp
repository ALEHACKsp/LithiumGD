#include <Windows.h>
#include <thread>
#include <chrono>
#include <iostream>

#include "Game/Game.h"
#include "Cheats/Cheats.h"
#include "Game/Offsets.h"

cGame* Game = new cGame();
cCheats* Cheats = new cCheats();

void MenuEntry(std::string Text, bool Enabled, HANDLE ConsoleHandle) {
	std::cout << Text << ":";
	(Enabled ? SetConsoleTextAttribute(ConsoleHandle, FOREGROUND_GREEN) : SetConsoleTextAttribute(ConsoleHandle, FOREGROUND_RED));
	std::cout << (Enabled ? " ON\n" : " OFF\n");
	SetConsoleTextAttribute(ConsoleHandle, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
}

void MenuCategory(std::string Text, HANDLE ConsoleHandle) {
	SetConsoleTextAttribute(ConsoleHandle, FOREGROUND_BLUE);
	std::cout << std::endl << Text << std::endl;
	SetConsoleTextAttribute(ConsoleHandle, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
}

void MenuHeader(HANDLE ConsoleHandle) {
	SetConsoleTextAttribute(ConsoleHandle, FOREGROUND_GREEN);
	std::cout << "LithiumGD ";
	SetConsoleTextAttribute(ConsoleHandle, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
	std::cout << "by ";
	SetConsoleTextAttribute(ConsoleHandle, FOREGROUND_RED);
	std::cout << "Nexo ";
	SetConsoleTextAttribute(ConsoleHandle, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
	std::cout << "| ";
	SetConsoleTextAttribute(ConsoleHandle, FOREGROUND_BLUE);
	std::cout << "Discord: ";
	SetConsoleTextAttribute(ConsoleHandle, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
	std::cout << "Nexo";
	SetConsoleTextAttribute(ConsoleHandle, FOREGROUND_RED);
	std::cout << "#2557\n";
}

//I know, shitty way but propably will be changed
void StateChange(int ChoosenOption) {
	switch (ChoosenOption) {
		case 1: {
			Cheats->Configuration.UnlockIcons = !Cheats->Configuration.UnlockIcons;
			Cheats->UnlockIcons();
			break;
		}

		case 2: {
			Cheats->Configuration.TextLength = !Cheats->Configuration.TextLength;
			Cheats->TextLength();
			break;
		}

		case 3: {
			Cheats->Configuration.CustomCharacters = !Cheats->Configuration.CustomCharacters;
			Cheats->CustomCharacters();
			break;
		}

		case 4: {
			Cheats->Configuration.SliderLimit = !Cheats->Configuration.SliderLimit;
			Cheats->SliderLimit();
			break;
		}

		case 5: {
			Cheats->Configuration.DemonLevels = !Cheats->Configuration.DemonLevels;
			Cheats->DemonLevels();
			break;
		}

		case 6: {
			Cheats->Configuration.GuardVault = !Cheats->Configuration.GuardVault;
			Cheats->GuardVault();
			break;
		}

		case 7: {
			Cheats->Configuration.KeymasterVault = !Cheats->Configuration.KeymasterVault;
			Cheats->KeymasterVault();
			break;
		}

		case 8: {
			Cheats->Configuration.KeymasterBasement = !Cheats->Configuration.KeymasterBasement;
			Cheats->KeymasterBasement();
			break;
		}

		case 9: {
			Cheats->Configuration.BasementKeys = !Cheats->Configuration.BasementKeys;
			Cheats->BasementKeys();
			break;
		}

		case 10: {
			Cheats->Configuration.Challenge = !Cheats->Configuration.Challenge;
			Cheats->Challenge();
			break;
		}

		case 11: {
			Cheats->Configuration.TreasureRoom = !Cheats->Configuration.TreasureRoom;
			Cheats->TreasureRoom();
			break;
		}

		case 12: {
			Cheats->Configuration.PotborShop = !Cheats->Configuration.PotborShop;
			Cheats->PotborShop();
			break;
		}

		case 13: {
			Cheats->Configuration.ScratchShop = !Cheats->Configuration.ScratchShop;
			Cheats->ScratchShop();
			break;
		}

		case 14: {
			Cheats->Configuration.ManaOrbs = !Cheats->Configuration.ManaOrbs;
			Cheats->ManaOrbs();
			break;
		}

		case 15: {
			Cheats->Configuration.GatekeeperVault = !Cheats->Configuration.GatekeeperVault;
			Cheats->GatekeeperVault();
			break;
		}

		case 16: {
			Cheats->Configuration.BackupStars = !Cheats->Configuration.BackupStars;
			Cheats->BackupStars();
			break;
		}

		case 17: {
			Cheats->Configuration.CopyHack = !Cheats->Configuration.CopyHack;
			Cheats->CopyHack();
			break;
		}

		case 18: {
			Cheats->Configuration.NoCopyMark = !Cheats->Configuration.NoCopyMark;
			Cheats->NoCopyMark();
			break;
		}

		case 19: {
			Cheats->Configuration.UnlimitedObjects = !Cheats->Configuration.UnlimitedObjects;
			Cheats->UnlimitedObjects();
			break;
		}

		case 20: {
			Cheats->Configuration.UnlimitedCustomObjects = !Cheats->Configuration.UnlimitedCustomObjects;
			Cheats->UnlimitedCustomObjects();
			break;
		}

		case 21: {
			Cheats->Configuration.UnlimitedZoom = !Cheats->Configuration.UnlimitedZoom;
			Cheats->UnlimitedZoom();
			break;
		}

		case 22: {
			Cheats->Configuration.UnlimitedToolboxButtons = !Cheats->Configuration.UnlimitedToolboxButtons;
			Cheats->UnlimitedToolboxButtons();
			break;
		}

		case 23: {
			Cheats->Configuration.VerifyHack = !Cheats->Configuration.VerifyHack;
			Cheats->VerifyHack();
			break;
		}

		case 24: {
			Cheats->Configuration.HiddenSongs = !Cheats->Configuration.HiddenSongs;
			Cheats->HiddenSongs();
			break;
		}

		case 25: {
			Cheats->Configuration.EditorLength = !Cheats->Configuration.EditorLength;
			Cheats->EditorLength();
			break;
		}

		case 26: {
			Cheats->Configuration.PlaceOver = !Cheats->Configuration.PlaceOver;
			Cheats->PlaceOver();
			break;
		}

		case 27: {
			Cheats->Configuration.AntiTestmode = !Cheats->Configuration.AntiTestmode;
			Cheats->AntiTestmode();
			break;
		}

		case 28: {
			Cheats->Configuration.RotationHack = !Cheats->Configuration.RotationHack;
			Cheats->RotationHack();
			break;
		}

		case 29: {
			Cheats->Configuration.FreeScroll = !Cheats->Configuration.FreeScroll;
			Cheats->FreeScroll();
			break;
		}

		case 30: {
			Cheats->Configuration.NoEditorUI = !Cheats->Configuration.NoEditorUI;
			Cheats->NoEditorUI();
			break;
		}

		case 31: {
			Cheats->Configuration.UnlimitedZOrder = !Cheats->Configuration.UnlimitedZOrder;
			Cheats->UnlimitedZOrder();
			break;
		}

		case 32: {
			Cheats->Configuration.AbsoluteScaling = !Cheats->Configuration.AbsoluteScaling;
			Cheats->AbsoluteScaling();
			break;
		}

		case 33: {
			Cheats->Configuration.AbsolutePosition = !Cheats->Configuration.AbsolutePosition;
			Cheats->AbsolutePosition();
			break;
		}

		case 34: {
			Cheats->Configuration.NoScaleSnap = !Cheats->Configuration.NoScaleSnap;
			Cheats->NoScaleSnap();
			break;
		}

		case 35: {
			Cheats->Configuration.Noclip = !Cheats->Configuration.Noclip;
			Cheats->Noclip();
			break;
		}

		case 36: {
			Cheats->Configuration.NoSpikes = !Cheats->Configuration.NoSpikes;
			Cheats->NoSpikes();
			break;
		}

		case 37: {
			Cheats->Configuration.NoHitbox = !Cheats->Configuration.NoHitbox;
			Cheats->NoHitbox();
			break;
		}

		case 38: {
			Cheats->Configuration.NoSolids = !Cheats->Configuration.NoSolids;
			Cheats->NoSolids();
			break;
		}

		case 39: {
			Cheats->Configuration.ForceBlock = !Cheats->Configuration.ForceBlock;
			Cheats->ForceBlock();
			break;
		}

		case 40: {
			Cheats->Configuration.EverythingHurts = !Cheats->Configuration.EverythingHurts;
			Cheats->EverythingHurts();
			break;
		}

		case 41: {
			Cheats->Configuration.FreezePlayer = !Cheats->Configuration.FreezePlayer;
			Cheats->FreezePlayer();
			break;
		}

		case 42: {
			Cheats->Configuration.AirJump = !Cheats->Configuration.AirJump;
			Cheats->AirJump();
			break;
		}

		case 43: {
			Cheats->Configuration.TrailAlwaysOn = !Cheats->Configuration.TrailAlwaysOn;
			Cheats->TrailAlwaysOn();
			break;
		}

		case 44: {
			Cheats->Configuration.TrailAlwaysOff = !Cheats->Configuration.TrailAlwaysOff;
			Cheats->TrailAlwaysOff();
			break;
		}

		case 45: {
			Cheats->Configuration.InversedTrail = !Cheats->Configuration.InversedTrail;
			Cheats->InversedTrail();
			break;
		}

		case 46: {
			Cheats->Configuration.PracticeMusicHack = !Cheats->Configuration.PracticeMusicHack;
			Cheats->PracticeMusicHack();
			break;
		}

		case 47: {
			Cheats->Configuration.Suicide = !Cheats->Configuration.Suicide;
			Cheats->Suicide();
			break;
		}

		case 48: {
			Cheats->Configuration.NoParticles = !Cheats->Configuration.NoParticles;
			Cheats->NoParticles();
			break;
		}

		case 49: {
			Cheats->Configuration.NoPauseButton = !Cheats->Configuration.NoPauseButton;
			Cheats->NoPauseButton();
			break;
		}

		case 50: {
			Cheats->Configuration.NoGlow = !Cheats->Configuration.NoGlow;
			Cheats->NoGlow();
			break;
		}

		case 51: {
			Cheats->Configuration.AntiCheatBypass = !Cheats->Configuration.AntiCheatBypass;
			Cheats->AntiCheatBypass();
			break;
		}

		case 52: {
			Cheats->Configuration.ForceVisibility = !Cheats->Configuration.ForceVisibility;
			Cheats->ForceVisibility();
			break;
		}

		case 53: {
			Cheats->Configuration.UnlimitedFps = !Cheats->Configuration.UnlimitedFps;
			Cheats->UnlimitedFps();
			break;
		}

		case 54: {
			Cheats->Configuration.NoRotation = !Cheats->Configuration.NoRotation;
			Cheats->NoRotation();
			break;
		}

		case 55: {
			Cheats->Configuration.FreeResize = !Cheats->Configuration.FreeResize;
			Cheats->FreeResize();
			break;
		}

		default: {
			break;
		}
	}
}

void ConsoleThreadHandler() {
	HANDLE ConsoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
	int ChoosenOption = 0;

	std::cout << "\nPress enter to start.";

	while (true) {
		if (GetAsyncKeyState(VK_RETURN) & 1) {
			system("cls");

			MenuHeader(ConsoleHandle);
			
			MenuCategory("Bypass:", ConsoleHandle);
			MenuEntry("1)  Unlock all icons", Cheats->Configuration.UnlockIcons, ConsoleHandle);
			MenuEntry("2)  Text length", Cheats->Configuration.TextLength, ConsoleHandle);
			MenuEntry("3)  Custom characters", Cheats->Configuration.CustomCharacters, ConsoleHandle);
			MenuEntry("4)  Slider limit", Cheats->Configuration.SliderLimit, ConsoleHandle);
			MenuEntry("5)  Demon levels", Cheats->Configuration.DemonLevels, ConsoleHandle);
			MenuEntry("6)  Guard vault", Cheats->Configuration.GuardVault, ConsoleHandle);
			MenuEntry("7)  Keymaster vault", Cheats->Configuration.KeymasterVault, ConsoleHandle);
			MenuEntry("8)  Keymaster basement", Cheats->Configuration.KeymasterBasement, ConsoleHandle);
			MenuEntry("9)  Basement keys", Cheats->Configuration.BasementKeys, ConsoleHandle);
			MenuEntry("10) Challenge", Cheats->Configuration.Challenge, ConsoleHandle);
			MenuEntry("11) Treasure room", Cheats->Configuration.TreasureRoom, ConsoleHandle);
			MenuEntry("12) Potbor shop", Cheats->Configuration.PotborShop, ConsoleHandle);
			MenuEntry("13) Scratch shop", Cheats->Configuration.ScratchShop, ConsoleHandle);
			MenuEntry("14) Mana orbs", Cheats->Configuration.ManaOrbs, ConsoleHandle);
			MenuEntry("15) Gatekeeper vault", Cheats->Configuration.GatekeeperVault, ConsoleHandle);
			MenuEntry("16) Backup stars", Cheats->Configuration.BackupStars, ConsoleHandle);

			MenuCategory("Creator:", ConsoleHandle);
			MenuEntry("17) Copy hack", Cheats->Configuration.CopyHack, ConsoleHandle);
			MenuEntry("18) No copy mark", Cheats->Configuration.NoCopyMark, ConsoleHandle);
			MenuEntry("19) Unlimited objects", Cheats->Configuration.UnlimitedObjects, ConsoleHandle);
			MenuEntry("20) Unlimited custom objects", Cheats->Configuration.UnlimitedCustomObjects, ConsoleHandle);
			MenuEntry("21) Unlimited zoom", Cheats->Configuration.UnlimitedZoom, ConsoleHandle);
			MenuEntry("22) Unlimited toolbox buttons", Cheats->Configuration.UnlimitedToolboxButtons, ConsoleHandle);
			MenuEntry("23) Verify hack", Cheats->Configuration.VerifyHack, ConsoleHandle);
			MenuEntry("24) Hidden songs", Cheats->Configuration.HiddenSongs, ConsoleHandle);
			MenuEntry("25) Editor length", Cheats->Configuration.EditorLength, ConsoleHandle);
			MenuEntry("26) Place over", Cheats->Configuration.PlaceOver, ConsoleHandle);
			MenuEntry("27) Anti testmode", Cheats->Configuration.AntiTestmode, ConsoleHandle);
			MenuEntry("28) Rotation hack", Cheats->Configuration.RotationHack, ConsoleHandle);
			MenuEntry("29) Free scroll", Cheats->Configuration.FreeScroll, ConsoleHandle);
			MenuEntry("30) No editor UI", Cheats->Configuration.NoEditorUI, ConsoleHandle);
			MenuEntry("31) Unlimited Z order", Cheats->Configuration.UnlimitedZOrder, ConsoleHandle);
			MenuEntry("32) Absolute scaling", Cheats->Configuration.AbsoluteScaling, ConsoleHandle);
			MenuEntry("33) Absolute position", Cheats->Configuration.AbsolutePosition, ConsoleHandle);
			MenuEntry("34) No scale snap", Cheats->Configuration.NoScaleSnap, ConsoleHandle);

			MenuCategory("Player:", ConsoleHandle);
			MenuEntry("35) Noclip", Cheats->Configuration.Noclip, ConsoleHandle);
			MenuEntry("36) No spikes", Cheats->Configuration.NoSpikes, ConsoleHandle);
			MenuEntry("37) No hitbox", Cheats->Configuration.NoHitbox, ConsoleHandle);
			MenuEntry("38) No solids", Cheats->Configuration.NoSolids, ConsoleHandle);
			MenuEntry("39) Force block", Cheats->Configuration.ForceBlock, ConsoleHandle);
			MenuEntry("40) Everything hurts", Cheats->Configuration.EverythingHurts, ConsoleHandle);
			MenuEntry("41) Freeze player", Cheats->Configuration.FreezePlayer, ConsoleHandle);
			MenuEntry("42) Air jump", Cheats->Configuration.AirJump, ConsoleHandle);
			MenuEntry("43) Trail always on", Cheats->Configuration.TrailAlwaysOn, ConsoleHandle);
			MenuEntry("44) Trail always off", Cheats->Configuration.TrailAlwaysOff, ConsoleHandle);
			MenuEntry("45) Inversed trail", Cheats->Configuration.InversedTrail, ConsoleHandle);
			MenuEntry("46) Practice music hack", Cheats->Configuration.PracticeMusicHack, ConsoleHandle);
			MenuEntry("47) Suicide", Cheats->Configuration.Suicide, ConsoleHandle);
			MenuEntry("48) No particles", Cheats->Configuration.NoParticles, ConsoleHandle);
			MenuEntry("49) No pause button", Cheats->Configuration.NoPauseButton, ConsoleHandle);
			MenuEntry("50) No glow", Cheats->Configuration.NoGlow, ConsoleHandle);

			MenuCategory("Others:", ConsoleHandle);
			MenuEntry("51) Anti-cheat bypass", Cheats->Configuration.AntiCheatBypass, ConsoleHandle);
			MenuEntry("52) Force visibility", Cheats->Configuration.ForceVisibility, ConsoleHandle);
			MenuEntry("53) Unlimited fps", Cheats->Configuration.UnlimitedFps, ConsoleHandle);
			MenuEntry("54) No rotation", Cheats->Configuration.NoRotation, ConsoleHandle);
			MenuEntry("55) Free resize", Cheats->Configuration.FreeResize, ConsoleHandle);

			ChoosenOption = 0;
			std::cout << "\nNumber of option to change: "; std::cin >> ChoosenOption;
			StateChange(ChoosenOption);
		}

		std::this_thread::sleep_for(std::chrono::milliseconds(10));
	}
}

int main() {
	Game->GetProcess();

	std::thread ConsoleThread(ConsoleThreadHandler);
	ConsoleThread.join();

	return 1;
}
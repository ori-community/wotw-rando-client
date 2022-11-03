#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Game::UI {
    IL2CPP_REGISTER_METHOD(0x00685400, void, ResetStatics, ())
    IL2CPP_REGISTER_METHOD(0x006854D0, void, ResetStatics3, ())
    IL2CPP_REGISTER_METHOD(0x00685570, void, ResetStatics2, ())
    IL2CPP_REGISTER_METHOD(0x00685630, app::MenuScreenManager*, get_Menu, ())
    IL2CPP_REGISTER_METHOD(0x006856D0, void, set_Menu, (app::MenuScreenManager * value))
    IL2CPP_REGISTER_METHOD(0x00685780, bool, get_MainMenuVisible, ())
    IL2CPP_REGISTER_METHOD(0x00685940, bool, get_WorldMapVisible, ())
    IL2CPP_REGISTER_METHOD(0x00685A20, bool, get_ShardShopVisible, ())
    IL2CPP_REGISTER_METHOD(0x00685B40, bool, get_WeaponmasterScreenVisible, ())
    IL2CPP_REGISTER_METHOD(0x00685C10, bool, get_BuilderScreenVisible, ())
    IL2CPP_REGISTER_METHOD(0x00685CE0, bool, get_GardenerScreenVisible, ())
    IL2CPP_REGISTER_METHOD(0x00685DB0, bool, get_MainMenuExists, ())
    IL2CPP_REGISTER_METHOD(0x00685E80, bool, IsInventoryVisible, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, ())
} // namespace app::classes::Game::UI

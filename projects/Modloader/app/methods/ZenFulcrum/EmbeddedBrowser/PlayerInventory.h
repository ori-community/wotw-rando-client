#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::ZenFulcrum::EmbeddedBrowser::PlayerInventory {
    IL2CPP_REGISTER_METHOD(0x01DE9940, app::PlayerInventory*, get_Instance, ())
    IL2CPP_REGISTER_METHOD(0x01DE99C0, void, set_Instance, (app::PlayerInventory * value))
    IL2CPP_REGISTER_METHOD(0x003FC7F0, int32_t, get_NumCoins, (app::PlayerInventory * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00617D40, void, set_NumCoins, (app::PlayerInventory * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x01DE9A50, void, add_coinCollected, (app::PlayerInventory * this_ptr, app::Action_1_Int32_* value))
    IL2CPP_REGISTER_METHOD(0x01DE9B40, void, remove_coinCollected, (app::PlayerInventory * this_ptr, app::Action_1_Int32_* value))
    IL2CPP_REGISTER_METHOD(0x01DE99C0, void, Awake, (app::PlayerInventory * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01DE9C30, void, AddCoin, (app::PlayerInventory * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01DE9CD0, void, ctor, (app::PlayerInventory * this_ptr))
} // namespace app::classes::ZenFulcrum::EmbeddedBrowser::PlayerInventory

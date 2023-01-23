#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Spear.h>

namespace app::classes::Spear {
    IL2CPP_REGISTER_METHOD(0x00EF6FA0, void, Start, (app::Spear * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPoolSpawned, (app::Spear * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPoolDespawned, (app::Spear * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EF6FB0, void, CreateTrail, (app::Spear * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EF72B0, void, OnDisable, (app::Spear * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EF7330, void, Update, (app::Spear * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::Spear * this_ptr))
} // namespace app::classes::Spear

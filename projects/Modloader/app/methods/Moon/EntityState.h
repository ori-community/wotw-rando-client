#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/EntityState.h>

namespace app::classes::Moon::EntityState {
    IL2CPP_REGISTER_METHOD(0x0052A050, bool, get_IsRunning, (app::EntityState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A060, void, set_IsRunning, (app::EntityState * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, GetStateId, (app::EntityState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEnter, (app::EntityState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExit, (app::EntityState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateState, (app::EntityState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::EntityState * this_ptr))
} // namespace app::classes::Moon::EntityState

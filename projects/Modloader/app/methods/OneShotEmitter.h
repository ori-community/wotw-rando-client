#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/OneShotEmitter.h>
#include <Modloader/app/structs/UpdateType__Enum.h>

namespace app::classes::OneShotEmitter {
    IL2CPP_REGISTER_METHOD(0x0043D9E0, app::UpdateType__Enum, get_UpdateType, app::OneShotEmitter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00614710, void, Awake, app::OneShotEmitter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00614820, void, OnEnable, app::OneShotEmitter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006148C0, void, OnDisable, app::OneShotEmitter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00614960, void, OnPoolSpawned, app::OneShotEmitter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00614A70, void, OnUpdate, app::OneShotEmitter* this_ptr, float delta)
    IL2CPP_REGISTER_METHOD(0x00614BA0, bool, get_IsSuspended, app::OneShotEmitter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00614BB0, void, set_IsSuspended, app::OneShotEmitter* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00614BC0, void, ctor, app::OneShotEmitter* this_ptr)
} // namespace app::classes::OneShotEmitter

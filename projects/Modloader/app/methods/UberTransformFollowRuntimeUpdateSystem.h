#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/UberTransformFollowRuntimeUpdateSystem.h>
#include <Modloader/app/structs/UpdateType__Enum.h>

namespace app::classes::UberTransformFollowRuntimeUpdateSystem {
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::UpdateType__Enum, get_UpdateType, app::UberTransformFollowRuntimeUpdateSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03122EC0, void, Awake, app::UberTransformFollowRuntimeUpdateSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03122F60, void, OnDestroy, app::UberTransformFollowRuntimeUpdateSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03123000, void, OnUpdate, app::UberTransformFollowRuntimeUpdateSystem* this_ptr, float delta)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::UberTransformFollowRuntimeUpdateSystem* this_ptr)
} // namespace app::classes::UberTransformFollowRuntimeUpdateSystem

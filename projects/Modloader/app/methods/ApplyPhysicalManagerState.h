#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ApplyPhysicalManagerState.h>
#include <Modloader/app/structs/UpdateType__Enum.h>

namespace app::classes::ApplyPhysicalManagerState {
    IL2CPP_REGISTER_METHOD(0x005072F0, void, OnEnable, (app::ApplyPhysicalManagerState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005076C0, void, OnDisable, (app::ApplyPhysicalManagerState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00507A40, void, ApplyState, (app::ApplyPhysicalManagerState * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047307B8, ApplyPhysicalManagerState_ApplyState__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0043D9E0, app::UpdateType__Enum, get_UpdateType, (app::ApplyPhysicalManagerState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00507A70, void, OnUpdate, (app::ApplyPhysicalManagerState * this_ptr, float dt))
    IL2CPP_REGISTER_METHOD(0x00507B60, void, ctor, (app::ApplyPhysicalManagerState * this_ptr))
} // namespace app::classes::ApplyPhysicalManagerState

#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IVRApplications_GetTransitionState.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/EVRApplicationTransitionState__Enum.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRApplications__GetTransitionState {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVRApplications_GetTransitionState * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x0167F180, app::EVRApplicationTransitionState__Enum, Invoke, (app::IVRApplications_GetTransitionState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00611B10, app::IAsyncResult*, BeginInvoke, (app::IVRApplications_GetTransitionState * this_ptr, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00F550D0, app::EVRApplicationTransitionState__Enum, EndInvoke, (app::IVRApplications_GetTransitionState * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRApplications__GetTransitionState

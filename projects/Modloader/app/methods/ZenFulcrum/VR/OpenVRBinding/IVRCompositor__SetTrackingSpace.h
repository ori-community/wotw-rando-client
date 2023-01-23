#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/IVRCompositor_SetTrackingSpace.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ETrackingUniverseOrigin__Enum.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/AsyncCallback.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRCompositor__SetTrackingSpace {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVRCompositor_SetTrackingSpace * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x01C77D40, void, Invoke, (app::IVRCompositor_SetTrackingSpace * this_ptr, app::ETrackingUniverseOrigin__Enum e_origin))
    IL2CPP_REGISTER_METHOD(0x02F432C0, app::IAsyncResult*, BeginInvoke, (app::IVRCompositor_SetTrackingSpace * this_ptr, app::ETrackingUniverseOrigin__Enum e_origin, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::IVRCompositor_SetTrackingSpace * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRCompositor__SetTrackingSpace

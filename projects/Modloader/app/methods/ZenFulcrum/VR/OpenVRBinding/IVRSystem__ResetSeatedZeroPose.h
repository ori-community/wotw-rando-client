#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IVRSystem_ResetSeatedZeroPose.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRSystem__ResetSeatedZeroPose {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVRSystem_ResetSeatedZeroPose * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x00611820, void, Invoke, (app::IVRSystem_ResetSeatedZeroPose * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00611B10, app::IAsyncResult*, BeginInvoke, (app::IVRSystem_ResetSeatedZeroPose * this_ptr, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::IVRSystem_ResetSeatedZeroPose * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRSystem__ResetSeatedZeroPose

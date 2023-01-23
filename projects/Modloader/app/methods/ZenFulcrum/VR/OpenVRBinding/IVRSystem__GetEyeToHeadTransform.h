#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/IVRSystem_GetEyeToHeadTransform.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/HmdMatrix34_t.h>
#include <Modloader/app/structs/EVREye__Enum.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/AsyncCallback.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRSystem__GetEyeToHeadTransform {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVRSystem_GetEyeToHeadTransform * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02CEB670, app::HmdMatrix34_t, Invoke, (app::IVRSystem_GetEyeToHeadTransform * this_ptr, app::EVREye__Enum e_eye))
    IL2CPP_REGISTER_METHOD(0x02CEBA90, app::IAsyncResult*, BeginInvoke, (app::IVRSystem_GetEyeToHeadTransform * this_ptr, app::EVREye__Enum e_eye, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x02CEBB50, app::HmdMatrix34_t, EndInvoke, (app::IVRSystem_GetEyeToHeadTransform * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRSystem__GetEyeToHeadTransform

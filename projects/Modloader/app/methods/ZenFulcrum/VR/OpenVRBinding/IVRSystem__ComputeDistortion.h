#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IVRSystem_ComputeDistortion.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/DistortionCoordinates_t.h>
#include <Modloader/app/structs/EVREye__Enum.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRSystem__ComputeDistortion {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVRSystem_ComputeDistortion * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02CEA040, bool, Invoke, (app::IVRSystem_ComputeDistortion * this_ptr, app::EVREye__Enum e_eye, float f_u, float f_v, app::DistortionCoordinates_t* p_distortion_coordinates))
    IL2CPP_REGISTER_METHOD(0x02CEA480, app::IAsyncResult*, BeginInvoke, (app::IVRSystem_ComputeDistortion * this_ptr, app::EVREye__Enum e_eye, float f_u, float f_v, app::DistortionCoordinates_t* p_distortion_coordinates, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x0167A2D0, bool, EndInvoke, (app::IVRSystem_ComputeDistortion * this_ptr, app::DistortionCoordinates_t* p_distortion_coordinates, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRSystem__ComputeDistortion

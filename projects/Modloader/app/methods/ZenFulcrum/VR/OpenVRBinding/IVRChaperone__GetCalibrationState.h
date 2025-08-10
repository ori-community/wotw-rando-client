#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/ChaperoneCalibrationState__Enum.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/IVRChaperone_GetCalibrationState.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRChaperone__GetCalibrationState {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::IVRChaperone_GetCalibrationState* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(0x0167F180, app::ChaperoneCalibrationState__Enum, Invoke, app::IVRChaperone_GetCalibrationState* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00611B10,
        app::IAsyncResult*,
        BeginInvoke,
        app::IVRChaperone_GetCalibrationState* this_ptr,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(
        0x00F550D0,
        app::ChaperoneCalibrationState__Enum,
        EndInvoke,
        app::IVRChaperone_GetCalibrationState* this_ptr,
        app::IAsyncResult* result
    )
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRChaperone__GetCalibrationState

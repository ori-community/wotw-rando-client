#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ComparisonComparer_1_Moon_Wwise_WwiseEventSystem_SoundHandleProtected_CallbackData_.h>
#include <Modloader/app/structs/Comparison_1_Moon_Wwise_WwiseEventSystem_SoundHandleProtected_CallbackData_.h>
#include <Modloader/app/structs/WwiseEventSystem_SoundHandleProtected_CallbackData.h>

namespace app::classes::System::Collections::Generic::ComparisonComparer_1_Moon_Wwise_WwiseEventSystem_SoundHandleProtected_CallbackData_ {
    IL2CPP_REGISTER_METHOD(
        0x0162A010,
        void,
        ctor,
        app::ComparisonComparer_1_Moon_Wwise_WwiseEventSystem_SoundHandleProtected_CallbackData_* this_ptr,
        app::Comparison_1_Moon_Wwise_WwiseEventSystem_SoundHandleProtected_CallbackData_* comparison
    )
    IL2CPP_REGISTER_METHOD(
        0x0162A210,
        int32_t,
        Compare,
        app::ComparisonComparer_1_Moon_Wwise_WwiseEventSystem_SoundHandleProtected_CallbackData_* this_ptr,
        app::WwiseEventSystem_SoundHandleProtected_CallbackData x,
        app::WwiseEventSystem_SoundHandleProtected_CallbackData y
    )
} // namespace app::classes::System::Collections::Generic::ComparisonComparer_1_Moon_Wwise_WwiseEventSystem_SoundHandleProtected_CallbackData_

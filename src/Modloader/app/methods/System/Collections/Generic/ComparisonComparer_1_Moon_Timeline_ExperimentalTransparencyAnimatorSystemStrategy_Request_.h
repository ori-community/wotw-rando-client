#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ComparisonComparer_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_Request_.h>
#include <Modloader/app/structs/Comparison_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_Request_.h>
#include <Modloader/app/structs/ExperimentalTransparencyAnimatorSystemStrategy_Request.h>

namespace app::classes::System::Collections::Generic::ComparisonComparer_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_Request_ {
    IL2CPP_REGISTER_METHOD(
        0x0162A010,
        void,
        ctor,
        app::ComparisonComparer_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_Request_* this_ptr,
        app::Comparison_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_Request_* comparison
    )
    IL2CPP_REGISTER_METHOD(
        0x0162A2F0,
        int32_t,
        Compare,
        app::ComparisonComparer_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_Request_* this_ptr,
        app::ExperimentalTransparencyAnimatorSystemStrategy_Request x,
        app::ExperimentalTransparencyAnimatorSystemStrategy_Request y
    )
} // namespace app::classes::System::Collections::Generic::ComparisonComparer_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_Request_

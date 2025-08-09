#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ComparisonComparer_1_InstantiateDebug_InstantiateDebugUtility_InstanceInfo_.h>
#include <Modloader/app/structs/Comparison_1_InstantiateDebug_InstantiateDebugUtility_InstanceInfo_.h>
#include <Modloader/app/structs/InstantiateDebugUtility_InstanceInfo.h>

namespace app::classes::System::Collections::Generic::ComparisonComparer_1_InstantiateDebug_InstantiateDebugUtility_InstanceInfo_ {
    IL2CPP_REGISTER_METHOD(
        0x0162A010,
        void,
        ctor,
        app::ComparisonComparer_1_InstantiateDebug_InstantiateDebugUtility_InstanceInfo_* this_ptr,
        app::Comparison_1_InstantiateDebug_InstantiateDebugUtility_InstanceInfo_* comparison
    )
    IL2CPP_REGISTER_METHOD(
        0x0162A210,
        int32_t,
        Compare,
        app::ComparisonComparer_1_InstantiateDebug_InstantiateDebugUtility_InstanceInfo_* this_ptr,
        app::InstantiateDebugUtility_InstanceInfo x,
        app::InstantiateDebugUtility_InstanceInfo y
    )
} // namespace app::classes::System::Collections::Generic::ComparisonComparer_1_InstantiateDebug_InstantiateDebugUtility_InstanceInfo_

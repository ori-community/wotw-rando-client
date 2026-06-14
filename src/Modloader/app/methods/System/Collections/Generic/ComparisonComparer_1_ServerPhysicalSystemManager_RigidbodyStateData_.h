#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ComparisonComparer_1_ServerPhysicalSystemManager_RigidbodyStateData_.h>
#include <Modloader/app/structs/Comparison_1_ServerPhysicalSystemManager_RigidbodyStateData_.h>
#include <Modloader/app/structs/ServerPhysicalSystemManager_RigidbodyStateData.h>

namespace app::classes::System::Collections::Generic::ComparisonComparer_1_ServerPhysicalSystemManager_RigidbodyStateData_ {
    IL2CPP_REGISTER_METHOD(
        0x0162A010,
        void,
        ctor,
        app::ComparisonComparer_1_ServerPhysicalSystemManager_RigidbodyStateData_* this_ptr,
        app::Comparison_1_ServerPhysicalSystemManager_RigidbodyStateData_* comparison
    )
    IL2CPP_REGISTER_METHOD(
        0x0162A460,
        int32_t,
        Compare,
        app::ComparisonComparer_1_ServerPhysicalSystemManager_RigidbodyStateData_* this_ptr,
        app::ServerPhysicalSystemManager_RigidbodyStateData x,
        app::ServerPhysicalSystemManager_RigidbodyStateData y
    )
} // namespace app::classes::System::Collections::Generic::ComparisonComparer_1_ServerPhysicalSystemManager_RigidbodyStateData_

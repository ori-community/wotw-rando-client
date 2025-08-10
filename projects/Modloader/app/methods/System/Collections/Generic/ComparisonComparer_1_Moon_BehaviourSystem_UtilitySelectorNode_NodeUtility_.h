#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ComparisonComparer_1_Moon_BehaviourSystem_UtilitySelectorNode_NodeUtility_.h>
#include <Modloader/app/structs/Comparison_1_Moon_BehaviourSystem_UtilitySelectorNode_NodeUtility_.h>
#include <Modloader/app/structs/UtilitySelectorNode_NodeUtility.h>

namespace app::classes::System::Collections::Generic::ComparisonComparer_1_Moon_BehaviourSystem_UtilitySelectorNode_NodeUtility_ {
    IL2CPP_REGISTER_METHOD(
        0x0162A010,
        void,
        ctor,
        app::ComparisonComparer_1_Moon_BehaviourSystem_UtilitySelectorNode_NodeUtility_* this_ptr,
        app::Comparison_1_Moon_BehaviourSystem_UtilitySelectorNode_NodeUtility_* comparison
    )
    IL2CPP_REGISTER_METHOD(
        0x0162A050,
        int32_t,
        Compare,
        app::ComparisonComparer_1_Moon_BehaviourSystem_UtilitySelectorNode_NodeUtility_* this_ptr,
        app::UtilitySelectorNode_NodeUtility x,
        app::UtilitySelectorNode_NodeUtility y
    )
} // namespace app::classes::System::Collections::Generic::ComparisonComparer_1_Moon_BehaviourSystem_UtilitySelectorNode_NodeUtility_

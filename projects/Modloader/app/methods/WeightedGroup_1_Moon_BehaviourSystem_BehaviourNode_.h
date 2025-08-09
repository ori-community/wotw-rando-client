#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BehaviourNode.h>
#include <Modloader/app/structs/List_1_Moon_BehaviourSystem_BehaviourNode_.h>
#include <Modloader/app/structs/List_1_System_Single_.h>
#include <Modloader/app/structs/WeightedGroup_1_Moon_BehaviourSystem_BehaviourNode_.h>

namespace app::classes::WeightedGroup_1_Moon_BehaviourSystem_BehaviourNode_ {
    IL2CPP_REGISTER_METHOD(0x02AD0150, app::BehaviourNode*, GetRandomElement, app::WeightedGroup_1_Moon_BehaviourSystem_BehaviourNode_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02ACFA70, void, RemoveElement, app::WeightedGroup_1_Moon_BehaviourSystem_BehaviourNode_* this_ptr, app::BehaviourNode* element)
    IL2CPP_REGISTER_METHOD(0x0243AC00, int32_t, get_Count, app::WeightedGroup_1_Moon_BehaviourSystem_BehaviourNode_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02ACF490,
        void,
        ctor,
        app::WeightedGroup_1_Moon_BehaviourSystem_BehaviourNode_* this_ptr,
        app::List_1_Moon_BehaviourSystem_BehaviourNode_* elements,
        app::List_1_System_Single_* weights
    )
    IL2CPP_REGISTER_METHOD(
        0x02ACF7F0,
        void,
        SetElements,
        app::WeightedGroup_1_Moon_BehaviourSystem_BehaviourNode_* this_ptr,
        app::List_1_Moon_BehaviourSystem_BehaviourNode_* elements,
        app::List_1_System_Single_* weights
    )
} // namespace app::classes::WeightedGroup_1_Moon_BehaviourSystem_BehaviourNode_

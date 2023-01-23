#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/EntityBehaviourNode.h>
#include <Modloader/app/structs/List_1_Moon_BehaviourSystem_EntityBehaviourNode_.h>
#include <Modloader/app/structs/List_1_T_Enumerator_Moon_BehaviourSystem_EntityBehaviourNode_.h>

namespace app::classes::System::Collections::Generic::List_1_Moon_BehaviourSystem_EntityBehaviourNode_ {
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::EntityBehaviourNode*, get_Item, (app::List_1_Moon_BehaviourSystem_EntityBehaviourNode_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x0474DB40, List_1_Moon_BehaviourSystem_EntityBehaviourNode__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_Moon_BehaviourSystem_EntityBehaviourNode_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04790A68, List_1_Moon_BehaviourSystem_EntityBehaviourNode__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_Moon_BehaviourSystem_EntityBehaviourNode_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04704960, List_1_Moon_BehaviourSystem_EntityBehaviourNode___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_Moon_BehaviourSystem_EntityBehaviourNode_, GetEnumerator, (app::List_1_Moon_BehaviourSystem_EntityBehaviourNode_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0473F988, List_1_Moon_BehaviourSystem_EntityBehaviourNode__GetEnumerator__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, (app::List_1_Moon_BehaviourSystem_EntityBehaviourNode_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0475EDB8, List_1_Moon_BehaviourSystem_EntityBehaviourNode__Clear__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_Moon_BehaviourSystem_EntityBehaviourNode_ * this_ptr, app::EntityBehaviourNode* item))
    IL2CPP_REGISTER_METHODINFO(0x0474E488, List_1_Moon_BehaviourSystem_EntityBehaviourNode__Add__MethodInfo)
} // namespace app::classes::System::Collections::Generic::List_1_Moon_BehaviourSystem_EntityBehaviourNode_

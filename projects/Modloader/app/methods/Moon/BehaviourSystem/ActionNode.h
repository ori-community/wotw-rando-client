#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/ActionNode.h>
#include <Modloader/app/structs/Action_1.h>
#include <Modloader/app/structs/Action_1_Moon_BehaviourSystem_Action_.h>
#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/List_1_Moon_BehaviourSystem_Action_.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Moon::BehaviourSystem::ActionNode {
    IL2CPP_REGISTER_METHOD(0x03003210, app::String*, get_Info, app::ActionNode* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03003410, void, add_OnActionAdded, app::ActionNode* this_ptr, app::Action_1_Moon_BehaviourSystem_Action_* value)
    IL2CPP_REGISTER_METHOD(0x03003500, void, remove_OnActionAdded, app::ActionNode* this_ptr, app::Action_1_Moon_BehaviourSystem_Action_* value)
    IL2CPP_REGISTER_METHOD(0x030035F0, void, add_OnActionRemoved, app::ActionNode* this_ptr, app::Action* value)
    IL2CPP_REGISTER_METHOD(0x030036E0, void, remove_OnActionRemoved, app::ActionNode* this_ptr, app::Action* value)
    IL2CPP_REGISTER_METHOD(0x030037D0, void, OnValidate, app::ActionNode* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBCA0, app::List_1_Moon_BehaviourSystem_Action_*, get_Actions, app::ActionNode* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03003910, void, AddAction, app::ActionNode* this_ptr, app::Action_1* new_action)
    IL2CPP_REGISTER_METHOD(0x03003A00, bool, RemoveAction, app::ActionNode* this_ptr, app::Action_1* action)
    IL2CPP_REGISTER_METHOD(0x03003AF0, app::BehaviourStatus__Enum, OnExecute, app::ActionNode* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x03003D60, void, PerformSanityCheck, app::ActionNode* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03004020, void, ctor, app::ActionNode* this_ptr)
} // namespace app::classes::Moon::BehaviourSystem::ActionNode

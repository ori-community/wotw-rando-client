#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::BehaviourSystem::ActionDecorator {
    IL2CPP_REGISTER_METHOD(0x03002050, app::String*, get_Info, (app::ActionDecorator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03002250, void, add_OnActionAdded, (app::ActionDecorator * this_ptr, app::Action_1_Moon_BehaviourSystem_Action_* value))
    IL2CPP_REGISTER_METHOD(0x03002340, void, remove_OnActionAdded, (app::ActionDecorator * this_ptr, app::Action_1_Moon_BehaviourSystem_Action_* value))
    IL2CPP_REGISTER_METHOD(0x03002430, void, add_OnActionRemoved, (app::ActionDecorator * this_ptr, app::Action* value))
    IL2CPP_REGISTER_METHOD(0x03002520, void, remove_OnActionRemoved, (app::ActionDecorator * this_ptr, app::Action* value))
    IL2CPP_REGISTER_METHOD(0x002FBD00, app::List_1_Moon_BehaviourSystem_Action_*, get_Actions, (app::ActionDecorator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03002610, void, AddAction, (app::ActionDecorator * this_ptr, app::Action_1* new_action))
    IL2CPP_REGISTER_METHOD(0x03002700, bool, RemoveAction, (app::ActionDecorator * this_ptr, app::Action_1* action))
    IL2CPP_REGISTER_METHOD(0x030027F0, app::BehaviourStatus__Enum, OnExecute, (app::ActionDecorator * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x03002A10, void, PerformSanityCheck, (app::ActionDecorator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03002CD0, void, ctor, (app::ActionDecorator * this_ptr))
} // namespace app::classes::Moon::BehaviourSystem::ActionDecorator

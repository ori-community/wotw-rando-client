#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action_1_Moon_BehaviourSystem_Condition_.h>
#include <Modloader/app/structs/Condition.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Action_1_Moon_BehaviourSystem_Condition_ {
    IL2CPP_REGISTER_METHOD(0x00673B90, void, Invoke, (app::Action_1_Moon_BehaviourSystem_Condition_ * this_ptr, app::Condition* obj))
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Action_1_Moon_BehaviourSystem_Condition_ * this_ptr, app::Object* object, void* method_1))
} // namespace app::classes::System::Action_1_Moon_BehaviourSystem_Condition_

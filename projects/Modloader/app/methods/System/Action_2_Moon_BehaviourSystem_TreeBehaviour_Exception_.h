#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action_2_Moon_BehaviourSystem_TreeBehaviour_Exception_.h>
#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/TreeBehaviour.h>

namespace app::classes::System::Action_2_Moon_BehaviourSystem_TreeBehaviour_Exception_ {
    IL2CPP_REGISTER_METHOD(
        0x015FE410,
        void,
        Invoke,
        app::Action_2_Moon_BehaviourSystem_TreeBehaviour_Exception_* this_ptr,
        app::TreeBehaviour* arg1,
        app::Exception* arg2
    )
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::Action_2_Moon_BehaviourSystem_TreeBehaviour_Exception_* this_ptr, app::Object* object, void* method_1)
} // namespace app::classes::System::Action_2_Moon_BehaviourSystem_TreeBehaviour_Exception_

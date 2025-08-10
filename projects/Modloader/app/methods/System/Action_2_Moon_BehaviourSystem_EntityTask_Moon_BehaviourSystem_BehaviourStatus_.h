#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action_2_Moon_BehaviourSystem_EntityTask_Moon_BehaviourSystem_BehaviourStatus_.h>
#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/EntityTask.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Action_2_Moon_BehaviourSystem_EntityTask_Moon_BehaviourSystem_BehaviourStatus_ {
    IL2CPP_REGISTER_METHOD(
        0x00611810,
        void,
        ctor,
        app::Action_2_Moon_BehaviourSystem_EntityTask_Moon_BehaviourSystem_BehaviourStatus_* this_ptr,
        app::Object* object,
        void* method_1
    )
    IL2CPP_REGISTER_METHOD(
        0x02C11970,
        void,
        Invoke,
        app::Action_2_Moon_BehaviourSystem_EntityTask_Moon_BehaviourSystem_BehaviourStatus_* this_ptr,
        app::EntityTask* arg1,
        app::BehaviourStatus__Enum arg2
    )
} // namespace app::classes::System::Action_2_Moon_BehaviourSystem_EntityTask_Moon_BehaviourSystem_BehaviourStatus_

#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action_2_Moon_IEntityBehaviour_Moon_EntityBehaviourStatus_.h>
#include <Modloader/app/structs/EntityBehaviourStatus__Enum.h>
#include <Modloader/app/structs/IEntityBehaviour.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Action_2_Moon_IEntityBehaviour_Moon_EntityBehaviourStatus_ {
    IL2CPP_REGISTER_METHOD(
        0x02C11970,
        void,
        Invoke,
        app::Action_2_Moon_IEntityBehaviour_Moon_EntityBehaviourStatus_* this_ptr,
        app::IEntityBehaviour* arg1,
        app::EntityBehaviourStatus__Enum arg2
    )
    IL2CPP_REGISTER_METHOD(
        0x00611810,
        void,
        ctor,
        app::Action_2_Moon_IEntityBehaviour_Moon_EntityBehaviourStatus_* this_ptr,
        app::Object* object,
        void* method_1
    )
} // namespace app::classes::System::Action_2_Moon_IEntityBehaviour_Moon_EntityBehaviourStatus_

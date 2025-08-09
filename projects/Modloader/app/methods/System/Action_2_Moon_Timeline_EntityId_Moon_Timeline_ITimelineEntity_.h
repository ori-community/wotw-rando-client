#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action_2_Moon_Timeline_EntityId_Moon_Timeline_ITimelineEntity_.h>
#include <Modloader/app/structs/EntityId.h>
#include <Modloader/app/structs/ITimelineEntity.h>

namespace app::classes::System::Action_2_Moon_Timeline_EntityId_Moon_Timeline_ITimelineEntity_ {
    IL2CPP_REGISTER_METHOD(
        0x02C0E560,
        void,
        Invoke,
        app::Action_2_Moon_Timeline_EntityId_Moon_Timeline_ITimelineEntity_* this_ptr,
        app::EntityId arg1,
        app::ITimelineEntity* arg2
    )
}

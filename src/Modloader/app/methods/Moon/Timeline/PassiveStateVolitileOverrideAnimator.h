#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Constraint__Enum.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/IPassiveStateDescriptor.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/PassiveStateVolitileOverrideAnimator.h>
#include <Modloader/app/structs/TimelineEntity.h>
#include <Modloader/app/structs/TimelineEntityRecord.h>

namespace app::classes::Moon::Timeline::PassiveStateVolitileOverrideAnimator {
    IL2CPP_REGISTER_METHOD(0x01E78F40, app::IPassiveStateDescriptor*, get_ResolvedDescriptor, app::PassiveStateVolitileOverrideAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E79050, void, OnValidate, app::PassiveStateVolitileOverrideAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnStartPlayback, app::PassiveStateVolitileOverrideAnimator* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanUpdate, app::PassiveStateVolitileOverrideAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E79160, void, OnUpdateEntity, app::PassiveStateVolitileOverrideAnimator* this_ptr, float delta_time)
    IL2CPP_REGISTER_METHOD(
        0x01E791B0,
        void,
        SynchronizePad,
        app::PassiveStateVolitileOverrideAnimator* this_ptr,
        app::MoonTimeline* timeline,
        app::TimelineEntityRecord* record,
        app::TimelineEntity* entity,
        app::Constraint__Enum type
    )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEntityCreated, app::PassiveStateVolitileOverrideAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E79290, void, ctor, app::PassiveStateVolitileOverrideAnimator* this_ptr)
} // namespace app::classes::Moon::Timeline::PassiveStateVolitileOverrideAnimator

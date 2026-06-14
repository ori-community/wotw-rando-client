#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GhostTimelineEventsPlugin_PendingEvent__Boxed.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/ITimelineEntity.h>
#include <Modloader/app/structs/MoonTimelineNotifier_Action__Enum.h>

namespace app::classes::GhostTimelineEventsPlugin_PendingEvent {
    IL2CPP_REGISTER_METHOD(
        0x00119C60,
        void,
        ctor,
        app::GhostTimelineEventsPlugin_PendingEvent__Boxed* this_ptr,
        app::ITimelineEntity* entity,
        app::IContext* context,
        app::MoonTimelineNotifier_Action__Enum action
    )
}

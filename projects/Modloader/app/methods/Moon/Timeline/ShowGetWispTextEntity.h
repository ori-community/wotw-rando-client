#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ShowGetWispTextEntity.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/TimelineEntityRecord.h>

namespace app::classes::Moon::Timeline::ShowGetWispTextEntity {
    IL2CPP_REGISTER_METHOD(0x00D026D0, void, OnStartPlayback, (app::ShowGetWispTextEntity * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00D02290, void, SynchronizeData, (app::ShowGetWispTextEntity * this_ptr, app::MoonTimeline* timeline, app::TimelineEntityRecord* record))
    IL2CPP_REGISTER_METHOD(0x00D02830, void, ctor, (app::ShowGetWispTextEntity * this_ptr))
} // namespace app::classes::Moon::Timeline::ShowGetWispTextEntity

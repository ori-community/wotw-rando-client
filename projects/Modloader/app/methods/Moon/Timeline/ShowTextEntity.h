#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::Timeline::ShowTextEntity {
    IL2CPP_REGISTER_METHOD(0x00D04F20, bool, HasFinished, (app::ShowTextEntity * this_ptr, int32_t event_id))
    IL2CPP_REGISTER_METHOD(0x00D05040, void, OnUpdateEntity, (app::ShowTextEntity * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x00D05180, void, SynchronizeData, (app::ShowTextEntity * this_ptr, app::MoonTimeline* timeline, app::TimelineEntityRecord* record))
    IL2CPP_REGISTER_METHOD(0x00D05190, void, ctor, (app::ShowTextEntity * this_ptr))
} // namespace app::classes::Moon::Timeline::ShowTextEntity

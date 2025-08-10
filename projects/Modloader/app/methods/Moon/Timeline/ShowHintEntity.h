#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/ShowHintEntity.h>
#include <Modloader/app/structs/TimelineEntityRecord.h>

namespace app::classes::Moon::Timeline::ShowHintEntity {
    IL2CPP_REGISTER_METHOD(0x00623240, float, get_Duration, app::ShowHintEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00623250, void, set_Duration, app::ShowHintEntity* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x00D02840, void, OnStartPlayback, app::ShowHintEntity* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00D02A20, void, OnStopPlayback, app::ShowHintEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D02B40, void, SynchronizeData, app::ShowHintEntity* this_ptr, app::MoonTimeline* timeline, app::TimelineEntityRecord* record)
    IL2CPP_REGISTER_METHOD(0x00D02CA0, void, ctor, app::ShowHintEntity* this_ptr)
} // namespace app::classes::Moon::Timeline::ShowHintEntity

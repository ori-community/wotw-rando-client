#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ITimelineEntityParent.h>

namespace app::classes::Moon::Timeline::TimelineConstraintsExtensions {
    IL2CPP_REGISTER_METHOD(0x01E83D10, void, InvalidateAllConstraints, app::ITimelineEntityParent* timeline)
}

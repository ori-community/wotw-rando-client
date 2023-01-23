#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/TimelineEntityRecord.h>

namespace app::classes::Moon::Timeline::RecordExtensions {
    IL2CPP_REGISTER_METHOD(0x01E7E730, bool, IsOverhanging, (app::TimelineEntityRecord * record))
}

#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::Timeline::RecordExtensions {
    IL2CPP_REGISTER_METHOD(0x01E7E730, bool, IsOverhanging, (app::TimelineEntityRecord * record))
}

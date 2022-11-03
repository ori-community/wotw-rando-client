#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::Timeline::EventId {
    IL2CPP_REGISTER_METHOD(0x01BBD010, app::String*, GetName, (int32_t evt_key))
    IL2CPP_REGISTER_METHOD(0x01BBD0F0, void, cctor, ())
} // namespace app::classes::Moon::Timeline::EventId

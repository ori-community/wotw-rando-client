#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/String__Array.h>

namespace app::classes::Utils {
    IL2CPP_REGISTER_METHOD(0x02C6A720, float, get_TimeScale, ())
    IL2CPP_REGISTER_METHOD(0x02C6A770, void, set_TimeScale, (float value))
    IL2CPP_REGISTER_METHOD(0x03118E00, app::String*, FormatBytes_1, (int64_t _size))
    IL2CPP_REGISTER_METHOD(0x03118EB0, app::String*, FormatBytes_2, (int64_t _size, app::String__Array* _order_labels))
    IL2CPP_REGISTER_METHOD(0x03119100, app::String*, FormatPixels, (int64_t _pixel_count))
    IL2CPP_REGISTER_METHOD(0x031191B0, void, cctor, ())
} // namespace app::classes::Utils

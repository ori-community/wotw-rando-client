#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Histogram.h>

namespace app::classes::Colorful::Histogram {
    IL2CPP_REGISTER_METHOD(0x00444DD0, void, ctor, app::Histogram* this_ptr)
}

#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/FloatRangeUberStatePair.h>

namespace app::classes::FloatRangeUberStatePair {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::FloatRangeUberStatePair * this_ptr))
}

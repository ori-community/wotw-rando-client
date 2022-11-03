#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::EntityWeightData {
    IL2CPP_REGISTER_METHOD(0x00CA5F70, void, BuildDictonary, (app::EntityWeightData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004140E0, void, ctor, (app::EntityWeightData * this_ptr))
} // namespace app::classes::EntityWeightData

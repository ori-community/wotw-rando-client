#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SeinMaxHealthValueNormalizedProvider.h>

namespace app::classes::SeinMaxHealthValueNormalizedProvider {
    IL2CPP_REGISTER_METHOD(0x008A2C30, float, GetFloatValue, (app::SeinMaxHealthValueNormalizedProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008A2B50, void, ctor, (app::SeinMaxHealthValueNormalizedProvider * this_ptr))
} // namespace app::classes::SeinMaxHealthValueNormalizedProvider

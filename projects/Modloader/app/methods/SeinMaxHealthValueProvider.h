#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SeinMaxHealthValueProvider.h>

namespace app::classes::SeinMaxHealthValueProvider {
    IL2CPP_REGISTER_METHOD(0x008A2D00, float, GetFloatValue, (app::SeinMaxHealthValueProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008A2C20, void, ctor, (app::SeinMaxHealthValueProvider * this_ptr))
} // namespace app::classes::SeinMaxHealthValueProvider

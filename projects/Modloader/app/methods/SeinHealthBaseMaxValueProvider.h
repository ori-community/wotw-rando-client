#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SeinHealthBaseMaxValueProvider.h>

namespace app::classes::SeinHealthBaseMaxValueProvider {
    IL2CPP_REGISTER_METHOD(0x00FFB9A0, float, GetFloatValue, (app::SeinHealthBaseMaxValueProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008A2C20, void, ctor, (app::SeinHealthBaseMaxValueProvider * this_ptr))
} // namespace app::classes::SeinHealthBaseMaxValueProvider

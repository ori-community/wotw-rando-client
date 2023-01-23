#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SeinHealthVisualMaxNormalizedProvider.h>

namespace app::classes::SeinHealthVisualMaxNormalizedProvider {
    IL2CPP_REGISTER_METHOD(0x00FFF7A0, float, GetFloatValue, (app::SeinHealthVisualMaxNormalizedProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::SeinHealthVisualMaxNormalizedProvider * this_ptr))
} // namespace app::classes::SeinHealthVisualMaxNormalizedProvider

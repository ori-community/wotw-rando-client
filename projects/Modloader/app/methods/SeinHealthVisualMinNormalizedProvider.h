#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SeinHealthVisualMinNormalizedProvider.h>

namespace app::classes::SeinHealthVisualMinNormalizedProvider {
    IL2CPP_REGISTER_METHOD(0x00FFF950, float, GetFloatValue, (app::SeinHealthVisualMinNormalizedProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::SeinHealthVisualMinNormalizedProvider * this_ptr))
} // namespace app::classes::SeinHealthVisualMinNormalizedProvider

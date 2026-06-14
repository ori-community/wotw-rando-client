#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SeinHealthVisualMinProvider.h>

namespace app::classes::SeinHealthVisualMinProvider {
    IL2CPP_REGISTER_METHOD(0x00FFFA30, float, GetFloatValue, app::SeinHealthVisualMinProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008A2C20, void, ctor, app::SeinHealthVisualMinProvider* this_ptr)
} // namespace app::classes::SeinHealthVisualMinProvider

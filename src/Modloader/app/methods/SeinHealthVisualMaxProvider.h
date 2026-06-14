#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SeinHealthVisualMaxProvider.h>

namespace app::classes::SeinHealthVisualMaxProvider {
    IL2CPP_REGISTER_METHOD(0x00FFF880, float, GetFloatValue, app::SeinHealthVisualMaxProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008A2C20, void, ctor, app::SeinHealthVisualMaxProvider* this_ptr)
} // namespace app::classes::SeinHealthVisualMaxProvider

#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SeinHealthCurrentProvider.h>

namespace app::classes::SeinHealthCurrentProvider {
    IL2CPP_REGISTER_METHOD(0x00FFF6D0, float, GetFloatValue, (app::SeinHealthCurrentProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0072D940, void, ctor, (app::SeinHealthCurrentProvider * this_ptr))
} // namespace app::classes::SeinHealthCurrentProvider

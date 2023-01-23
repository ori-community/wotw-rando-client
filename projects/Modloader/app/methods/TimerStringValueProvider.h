#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TimerStringValueProvider.h>

namespace app::classes::TimerStringValueProvider {
    IL2CPP_REGISTER_METHOD(0x010F8600, app::String*, GetStringValue, (app::TimerStringValueProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::TimerStringValueProvider * this_ptr))
} // namespace app::classes::TimerStringValueProvider

#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TimerTargetStringValueProvider.h>

namespace app::classes::TimerTargetStringValueProvider {
    IL2CPP_REGISTER_METHOD(0x010F88F0, app::String*, GetStringValue, app::TimerTargetStringValueProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006771B0, void, ctor, app::TimerTargetStringValueProvider* this_ptr)
} // namespace app::classes::TimerTargetStringValueProvider

#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::TimerTargetStringValueProvider {
    IL2CPP_REGISTER_METHOD(0x010F88F0, app::String *, GetStringValue, (app::TimerTargetStringValueProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006771B0, void, ctor, (app::TimerTargetStringValueProvider * this_ptr))
}

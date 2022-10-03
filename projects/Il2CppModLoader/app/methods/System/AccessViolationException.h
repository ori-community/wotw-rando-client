#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::AccessViolationException {
    IL2CPP_REGISTER_METHOD(0x0228ADC0, void, ctor_1, (app::AccessViolationException * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A0FAA0, void, ctor_2, (app::AccessViolationException * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
} // namespace app::classes::System::AccessViolationException

#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::ArrayTypeMismatchException {
    IL2CPP_REGISTER_METHOD(0x02298F80, void, ctor_1, (app::ArrayTypeMismatchException * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0200AA70, void, ctor_2, (app::ArrayTypeMismatchException * this_ptr, app::String* message))
    IL2CPP_REGISTER_METHOD(0x01A0FAA0, void, ctor_3, (app::ArrayTypeMismatchException * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
} // namespace app::classes::System::ArrayTypeMismatchException

#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Collections::Generic::KeyNotFoundException {
    IL2CPP_REGISTER_METHOD(0x02022640, void, ctor_1, (app::KeyNotFoundException * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020226D0, void, ctor_2, (app::KeyNotFoundException * this_ptr, app::String* message))
    IL2CPP_REGISTER_METHOD(0x01A0FAA0, void, ctor_3, (app::KeyNotFoundException * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
} // namespace app::classes::System::Collections::Generic::KeyNotFoundException

#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::TimeZoneNotFoundException {
    IL2CPP_REGISTER_METHOD(0x027BB160, void, ctor_1, (app::TimeZoneNotFoundException * this_ptr, app::String* message, app::Exception* inner_exception))
    IL2CPP_REGISTER_METHOD(0x027BB220, void, ctor_2, (app::TimeZoneNotFoundException * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
    IL2CPP_REGISTER_METHOD(0x027BB2E0, void, ctor_3, (app::TimeZoneNotFoundException * this_ptr))
} // namespace app::classes::System::TimeZoneNotFoundException

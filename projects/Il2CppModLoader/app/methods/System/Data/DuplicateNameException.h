#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Data::DuplicateNameException {
    IL2CPP_REGISTER_METHOD(0x01F4D160, void, ctor_1, (app::DuplicateNameException * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
    IL2CPP_REGISTER_METHODINFO(0x047058D0, DuplicateNameException__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01F4D1B0, void, ctor_2, (app::DuplicateNameException * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F4D240, void, ctor_3, (app::DuplicateNameException * this_ptr, app::String* s))
} // namespace app::classes::System::Data::DuplicateNameException

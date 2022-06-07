#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::MemberAccessException {
    IL2CPP_REGISTER_METHOD(0x02269F60, void, ctor_1, (app::MemberAccessException * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02269FF0, void, ctor_2, (app::MemberAccessException * this_ptr, app::String * message))
    IL2CPP_REGISTER_METHOD(0x01A0FAA0, void, ctor_3, (app::MemberAccessException * this_ptr, app::SerializationInfo * info, app::StreamingContext context))
}

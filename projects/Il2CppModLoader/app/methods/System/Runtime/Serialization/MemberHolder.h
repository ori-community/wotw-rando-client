#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Runtime::Serialization::MemberHolder {
    IL2CPP_REGISTER_METHOD(0x01ED5870, void, ctor, (app::MemberHolder * this_ptr, app::Type * type, app::StreamingContext ctx))
    IL2CPP_REGISTER_METHOD(0x0150BDE0, int32_t, GetHashCode, (app::MemberHolder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01ED5880, bool, Equals, (app::MemberHolder * this_ptr, app::Object * obj))
}

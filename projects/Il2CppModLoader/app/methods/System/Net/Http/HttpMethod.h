#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Net::Http::HttpMethod {
    IL2CPP_REGISTER_METHOD(0x02D1B840, void, ctor, (app::HttpMethod * this_ptr, app::String * method_1))
    IL2CPP_REGISTER_METHODINFO(0x04753B20, HttpMethod__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02D1B910, app::HttpMethod *, get_Get, ())
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String *, get_Method, (app::HttpMethod * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02D1B9B0, app::HttpMethod *, get_Post, ())
    IL2CPP_REGISTER_METHOD(0x02D1BA50, bool, Equals_1, (app::HttpMethod * this_ptr, app::HttpMethod * other))
    IL2CPP_REGISTER_METHOD(0x02D1BBA0, bool, Equals_2, (app::HttpMethod * this_ptr, app::Object * obj))
    IL2CPP_REGISTER_METHOD(0x0150BDE0, int32_t, GetHashCode, (app::HttpMethod * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String *, ToString, (app::HttpMethod * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02D1BD80, void, cctor, ())
}

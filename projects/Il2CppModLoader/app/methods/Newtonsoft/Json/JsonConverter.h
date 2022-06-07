#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Newtonsoft::Json::JsonConverter {
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_CanRead, (app::JsonConverter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_CanWrite, (app::JsonConverter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::JsonConverter * this_ptr))
}

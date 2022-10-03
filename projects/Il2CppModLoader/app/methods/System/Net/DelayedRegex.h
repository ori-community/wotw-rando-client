#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Net::DelayedRegex {
    IL2CPP_REGISTER_METHOD(0x01EAC710, void, ctor_1, (app::DelayedRegex * this_ptr, app::String* regex_string))
    IL2CPP_REGISTER_METHODINFO(0x04764D00, DelayedRegex__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01EAC7D0, void, ctor_2, (app::DelayedRegex * this_ptr, app::Regex* regex))
    IL2CPP_REGISTER_METHODINFO(0x047313D8, DelayedRegex__ctor_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01EAC890, app::Regex*, get_AsRegex, (app::DelayedRegex * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01EACA10, app::String*, ToString, (app::DelayedRegex * this_ptr))
} // namespace app::classes::System::Net::DelayedRegex

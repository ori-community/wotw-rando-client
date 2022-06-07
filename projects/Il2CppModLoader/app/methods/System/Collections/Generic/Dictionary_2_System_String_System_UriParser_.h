#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Collections::Generic::Dictionary_2_System_String_System_UriParser_ {
    IL2CPP_REGISTER_METHOD(0x02259DF0, void, ctor, (app::Dictionary_2_System_String_System_UriParser_ * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHODINFO(0x04703FA8, Dictionary_2_System_String_System_UriParser___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BAC140, void, set_Item, (app::Dictionary_2_System_String_System_UriParser_ * this_ptr, app::String * key, app::UriParser * value))
    IL2CPP_REGISTER_METHODINFO(0x0472F1F0, Dictionary_2_System_String_System_UriParser__set_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BBA760, bool, TryGetValue, (app::Dictionary_2_System_String_System_UriParser_ * this_ptr, app::String * key, app::UriParser * * value))
    IL2CPP_REGISTER_METHODINFO(0x04770C08, Dictionary_2_System_String_System_UriParser__TryGetValue__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0283B2A0, int32_t, get_Count, (app::Dictionary_2_System_String_System_UriParser_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04787BE0, Dictionary_2_System_String_System_UriParser__get_Count__MethodInfo)
}

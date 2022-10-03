#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_String_System_Boolean_ {
    IL2CPP_REGISTER_METHOD(0x02BAC140, void, set_Item, (app::Dictionary_2_System_String_System_Boolean_ * this_ptr, app::String* key, bool value))
    IL2CPP_REGISTER_METHODINFO(0x04706A88, Dictionary_2_System_String_System_Boolean__set_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, (app::Dictionary_2_System_String_System_Boolean_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04768910, Dictionary_2_System_String_System_Boolean___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BA5090, bool, ContainsKey, (app::Dictionary_2_System_String_System_Boolean_ * this_ptr, app::String* key))
    IL2CPP_REGISTER_METHODINFO(0x0475E5D0, Dictionary_2_System_String_System_Boolean__ContainsKey__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0283B2B0, app::Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Boolean_*, get_Keys, (app::Dictionary_2_System_String_System_Boolean_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04747738, Dictionary_2_System_String_System_Boolean__get_Keys__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BAC170, void, Add, (app::Dictionary_2_System_String_System_Boolean_ * this_ptr, app::String* key, bool value))
    IL2CPP_REGISTER_METHODINFO(0x04779680, Dictionary_2_System_String_System_Boolean__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0283B2A0, int32_t, get_Count, (app::Dictionary_2_System_String_System_Boolean_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04749C18, Dictionary_2_System_String_System_Boolean__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BA5400, app::Dictionary_2_TKey_TValue_Enumerator_System_String_System_Boolean_, GetEnumerator, (app::Dictionary_2_System_String_System_Boolean_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047125D0, Dictionary_2_System_String_System_Boolean__GetEnumerator__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BC0F90, bool, TryGetValue, (app::Dictionary_2_System_String_System_Boolean_ * this_ptr, app::String* key, bool* value))
    IL2CPP_REGISTER_METHODINFO(0x04772F18, Dictionary_2_System_String_System_Boolean__TryGetValue__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0283B900, void, Clear, (app::Dictionary_2_System_String_System_Boolean_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047154B8, Dictionary_2_System_String_System_Boolean__Clear__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BBF070, bool, get_Item, (app::Dictionary_2_System_String_System_Boolean_ * this_ptr, app::String* key))
    IL2CPP_REGISTER_METHODINFO(0x047159C8, Dictionary_2_System_String_System_Boolean__get_Item__MethodInfo)
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_String_System_Boolean_

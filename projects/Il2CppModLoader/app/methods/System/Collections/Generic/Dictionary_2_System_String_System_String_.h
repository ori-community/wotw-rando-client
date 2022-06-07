#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Collections::Generic::Dictionary_2_System_String_System_String_ {
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor_1, (app::Dictionary_2_System_String_System_String_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0473A8B8, Dictionary_2_System_String_System_String___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BAC140, void, set_Item, (app::Dictionary_2_System_String_System_String_ * this_ptr, app::String * key, app::String * value))
    IL2CPP_REGISTER_METHODINFO(0x0472BD70, Dictionary_2_System_String_System_String__set_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0283B2A0, int32_t, get_Count, (app::Dictionary_2_System_String_System_String_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047814F0, Dictionary_2_System_String_System_String__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BA5400, app::Dictionary_2_TKey_TValue_Enumerator_System_String_System_String_, GetEnumerator, (app::Dictionary_2_System_String_System_String_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04768720, Dictionary_2_System_String_System_String__GetEnumerator__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02259DF0, void, ctor_2, (app::Dictionary_2_System_String_System_String_ * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHODINFO(0x0473B160, Dictionary_2_System_String_System_String___ctor_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BA5090, bool, ContainsKey, (app::Dictionary_2_System_String_System_String_ * this_ptr, app::String * key))
    IL2CPP_REGISTER_METHODINFO(0x04785D58, Dictionary_2_System_String_System_String__ContainsKey__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BBA760, bool, TryGetValue, (app::Dictionary_2_System_String_System_String_ * this_ptr, app::String * key, app::String * * value))
    IL2CPP_REGISTER_METHODINFO(0x0471E8F8, Dictionary_2_System_String_System_String__TryGetValue__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0283B2B0, app::Dictionary_2_TKey_TValue_KeyCollection_System_String_System_String_ *, get_Keys, (app::Dictionary_2_System_String_System_String_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04737E88, Dictionary_2_System_String_System_String__get_Keys__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BAC170, void, Add, (app::Dictionary_2_System_String_System_String_ * this_ptr, app::String * key, app::String * value))
    IL2CPP_REGISTER_METHODINFO(0x0473FB80, Dictionary_2_System_String_System_String__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BD24D0, app::String *, get_Item, (app::Dictionary_2_System_String_System_String_ * this_ptr, app::String * key))
    IL2CPP_REGISTER_METHODINFO(0x04759D80, Dictionary_2_System_String_System_String__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BD3EC0, bool, Remove, (app::Dictionary_2_System_String_System_String_ * this_ptr, app::String * key))
    IL2CPP_REGISTER_METHODINFO(0x04786968, Dictionary_2_System_String_System_String__Remove__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0283B900, void, Clear, (app::Dictionary_2_System_String_System_String_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047078D8, Dictionary_2_System_String_System_String__Clear__MethodInfo)
}

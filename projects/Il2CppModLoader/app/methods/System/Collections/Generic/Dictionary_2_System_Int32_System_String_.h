#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_Int32_System_String_ {
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, (app::Dictionary_2_System_Int32_System_String_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04742060, Dictionary_2_System_Int32_System_String___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BBA760, bool, TryGetValue, (app::Dictionary_2_System_Int32_System_String_ * this_ptr, int32_t key, app::String** value))
    IL2CPP_REGISTER_METHODINFO(0x0475FFA8, Dictionary_2_System_Int32_System_String__TryGetValue__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BAC140, void, set_Item, (app::Dictionary_2_System_Int32_System_String_ * this_ptr, int32_t key, app::String* value))
    IL2CPP_REGISTER_METHODINFO(0x04797D68, Dictionary_2_System_Int32_System_String__set_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0283B2B0, app::Dictionary_2_TKey_TValue_KeyCollection_System_Int32_System_String_*, get_Keys, (app::Dictionary_2_System_Int32_System_String_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04787688, Dictionary_2_System_Int32_System_String__get_Keys__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BB8880, app::String*, get_Item, (app::Dictionary_2_System_Int32_System_String_ * this_ptr, int32_t key))
    IL2CPP_REGISTER_METHODINFO(0x0472B118, Dictionary_2_System_Int32_System_String__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BAC170, void, Add, (app::Dictionary_2_System_Int32_System_String_ * this_ptr, int32_t key, app::String* value))
    IL2CPP_REGISTER_METHODINFO(0x04769298, Dictionary_2_System_Int32_System_String__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BA5090, bool, ContainsKey, (app::Dictionary_2_System_Int32_System_String_ * this_ptr, int32_t key))
    IL2CPP_REGISTER_METHODINFO(0x0470EEF8, Dictionary_2_System_Int32_System_String__ContainsKey__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0283B3E0, app::Dictionary_2_TKey_TValue_ValueCollection_System_Int32_System_String_*, get_Values, (app::Dictionary_2_System_Int32_System_String_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04780730, Dictionary_2_System_Int32_System_String__get_Values__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0283B2A0, int32_t, get_Count, (app::Dictionary_2_System_Int32_System_String_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04715FB0, Dictionary_2_System_Int32_System_String__get_Count__MethodInfo)
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_Int32_System_String_

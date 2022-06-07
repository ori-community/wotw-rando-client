#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Collections::Generic::Dictionary_2_System_UInt64_System_String_ {
    IL2CPP_REGISTER_METHOD(0x02BBA760, bool, TryGetValue, (app::Dictionary_2_System_UInt64_System_String_ * this_ptr, uint64_t key, app::String * * value))
    IL2CPP_REGISTER_METHODINFO(0x0478BA40, Dictionary_2_System_UInt64_System_String__TryGetValue__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, (app::Dictionary_2_System_UInt64_System_String_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04790780, Dictionary_2_System_UInt64_System_String___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BAC140, void, set_Item, (app::Dictionary_2_System_UInt64_System_String_ * this_ptr, uint64_t key, app::String * value))
    IL2CPP_REGISTER_METHODINFO(0x0477B128, Dictionary_2_System_UInt64_System_String__set_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0283B2B0, app::Dictionary_2_TKey_TValue_KeyCollection_System_UInt64_System_String_ *, get_Keys, (app::Dictionary_2_System_UInt64_System_String_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0476EA40, Dictionary_2_System_UInt64_System_String__get_Keys__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F08700, app::String *, get_Item, (app::Dictionary_2_System_UInt64_System_String_ * this_ptr, uint64_t key))
    IL2CPP_REGISTER_METHODINFO(0x04726160, Dictionary_2_System_UInt64_System_String__get_Item__MethodInfo)
}

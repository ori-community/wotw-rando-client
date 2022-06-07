#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Collections::Generic::Dictionary_2_System_Int32_WorldMapAreaState_ {
    IL2CPP_REGISTER_METHOD(0x0283B2A0, int32_t, get_Count, (app::Dictionary_2_System_Int32_WorldMapAreaState_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0478C5E0, Dictionary_2_System_Int32_WorldMapAreaState__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BAC6E0, app::Dictionary_2_TKey_TValue_Enumerator_System_Int32_WorldMapAreaState_, GetEnumerator, (app::Dictionary_2_System_Int32_WorldMapAreaState_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04722E98, Dictionary_2_System_Int32_WorldMapAreaState__GetEnumerator__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, (app::Dictionary_2_System_Int32_WorldMapAreaState_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047475C0, Dictionary_2_System_Int32_WorldMapAreaState___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BAC140, void, set_Item, (app::Dictionary_2_System_Int32_WorldMapAreaState_ * this_ptr, int32_t key, app::WorldMapAreaState__Enum value))
    IL2CPP_REGISTER_METHODINFO(0x04722038, Dictionary_2_System_Int32_WorldMapAreaState__set_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BADFC0, bool, TryGetValue, (app::Dictionary_2_System_Int32_WorldMapAreaState_ * this_ptr, int32_t key, app::WorldMapAreaState__Enum * value))
    IL2CPP_REGISTER_METHODINFO(0x04756188, Dictionary_2_System_Int32_WorldMapAreaState__TryGetValue__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BA5090, bool, ContainsKey, (app::Dictionary_2_System_Int32_WorldMapAreaState_ * this_ptr, int32_t key))
    IL2CPP_REGISTER_METHODINFO(0x04701C20, Dictionary_2_System_Int32_WorldMapAreaState__ContainsKey__MethodInfo)
}

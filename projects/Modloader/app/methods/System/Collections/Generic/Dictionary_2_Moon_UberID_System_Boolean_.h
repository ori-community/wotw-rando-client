#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Dictionary_2_Moon_UberID_System_Boolean_.h>
#include <Modloader/app/structs/UberID.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_KeyCollection_Moon_UberID_System_Boolean_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_Enumerator_Moon_UberID_System_Boolean_.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_Moon_UberID_System_Boolean_ {
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, (app::Dictionary_2_Moon_UberID_System_Boolean_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04791598, Dictionary_2_Moon_UberID_System_Boolean___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BC0F90, bool, TryGetValue, (app::Dictionary_2_Moon_UberID_System_Boolean_ * this_ptr, app::UberID* key, bool* value))
    IL2CPP_REGISTER_METHODINFO(0x0478E030, Dictionary_2_Moon_UberID_System_Boolean__TryGetValue__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BAC140, void, set_Item, (app::Dictionary_2_Moon_UberID_System_Boolean_ * this_ptr, app::UberID* key, bool value))
    IL2CPP_REGISTER_METHODINFO(0x04718AC8, Dictionary_2_Moon_UberID_System_Boolean__set_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0283B2A0, int32_t, get_Count, (app::Dictionary_2_Moon_UberID_System_Boolean_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0476F200, Dictionary_2_Moon_UberID_System_Boolean__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0283B2B0, app::Dictionary_2_TKey_TValue_KeyCollection_Moon_UberID_System_Boolean_*, get_Keys, (app::Dictionary_2_Moon_UberID_System_Boolean_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0472F0B8, Dictionary_2_Moon_UberID_System_Boolean__get_Keys__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BA5400, app::Dictionary_2_TKey_TValue_Enumerator_Moon_UberID_System_Boolean_, GetEnumerator, (app::Dictionary_2_Moon_UberID_System_Boolean_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0471EFE0, Dictionary_2_Moon_UberID_System_Boolean__GetEnumerator__MethodInfo)
} // namespace app::classes::System::Collections::Generic::Dictionary_2_Moon_UberID_System_Boolean_

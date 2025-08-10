#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_Moon_UberID_System_Object_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_Enumerator_Moon_UberID_System_Object_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_KeyCollection_Moon_UberID_System_Object_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/UberID.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_Moon_UberID_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, app::Dictionary_2_Moon_UberID_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02BBA760, bool, TryGetValue, app::Dictionary_2_Moon_UberID_System_Object_* this_ptr, app::UberID* key, app::Object** value)
    IL2CPP_REGISTER_METHOD(0x02BAC140, void, set_Item, app::Dictionary_2_Moon_UberID_System_Object_* this_ptr, app::UberID* key, app::Object* value)
    IL2CPP_REGISTER_METHOD(
        0x0283B2B0,
        app::Dictionary_2_TKey_TValue_KeyCollection_Moon_UberID_System_Object_*,
        get_Keys,
        app::Dictionary_2_Moon_UberID_System_Object_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02BA5400,
        app::Dictionary_2_TKey_TValue_Enumerator_Moon_UberID_System_Object_,
        GetEnumerator,
        app::Dictionary_2_Moon_UberID_System_Object_* this_ptr
    )
} // namespace app::classes::System::Collections::Generic::Dictionary_2_Moon_UberID_System_Object_

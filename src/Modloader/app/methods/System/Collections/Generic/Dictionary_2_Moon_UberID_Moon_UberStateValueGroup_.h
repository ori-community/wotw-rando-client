#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_Moon_UberID_Moon_UberStateValueGroup_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_Enumerator_Moon_UberID_Moon_UberStateValueGroup_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_KeyCollection_Moon_UberID_Moon_UberStateValueGroup_.h>
#include <Modloader/app/structs/UberID.h>
#include <Modloader/app/structs/UberStateValueGroup.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_Moon_UberID_Moon_UberStateValueGroup_ {
    IL2CPP_REGISTER_METHOD(
        0x02BA5400,
        app::Dictionary_2_TKey_TValue_Enumerator_Moon_UberID_Moon_UberStateValueGroup_,
        GetEnumerator,
        app::Dictionary_2_Moon_UberID_Moon_UberStateValueGroup_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, app::Dictionary_2_Moon_UberID_Moon_UberStateValueGroup_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02BAC170,
        void,
        Add,
        app::Dictionary_2_Moon_UberID_Moon_UberStateValueGroup_* this_ptr,
        app::UberID* key,
        app::UberStateValueGroup* value
    )
    IL2CPP_REGISTER_METHOD(
        0x0283B2B0,
        app::Dictionary_2_TKey_TValue_KeyCollection_Moon_UberID_Moon_UberStateValueGroup_*,
        get_Keys,
        app::Dictionary_2_Moon_UberID_Moon_UberStateValueGroup_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x02BD24D0, app::UberStateValueGroup*, get_Item, app::Dictionary_2_Moon_UberID_Moon_UberStateValueGroup_* this_ptr, app::UberID* key)
    IL2CPP_REGISTER_METHOD(
        0x02BBA760,
        bool,
        TryGetValue,
        app::Dictionary_2_Moon_UberID_Moon_UberStateValueGroup_* this_ptr,
        app::UberID* key,
        app::UberStateValueGroup** value
    )
} // namespace app::classes::System::Collections::Generic::Dictionary_2_Moon_UberID_Moon_UberStateValueGroup_

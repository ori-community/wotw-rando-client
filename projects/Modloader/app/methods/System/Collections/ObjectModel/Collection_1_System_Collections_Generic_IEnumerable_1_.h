#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Collection_1_System_Collections_Generic_IEnumerable_1_.h>
#include <Modloader/app/structs/IEnumerable_1_System_Security_Claims_Claim_.h>

namespace app::classes::System::Collections::ObjectModel::Collection_1_System_Collections_Generic_IEnumerable_1_ {
    IL2CPP_REGISTER_METHOD(0x02776BF0, void, ctor, app::Collection_1_System_Collections_Generic_IEnumerable_1_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02CFA3A0,
        app::IEnumerable_1_System_Security_Claims_Claim_*,
        get_Item,
        app::Collection_1_System_Collections_Generic_IEnumerable_1_* this_ptr,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(0x02B7DF30, int32_t, get_Count, app::Collection_1_System_Collections_Generic_IEnumerable_1_* this_ptr)
} // namespace app::classes::System::Collections::ObjectModel::Collection_1_System_Collections_Generic_IEnumerable_1_

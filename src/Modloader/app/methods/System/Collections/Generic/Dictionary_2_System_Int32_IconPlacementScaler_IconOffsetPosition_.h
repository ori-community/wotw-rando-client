#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_System_Int32_IconPlacementScaler_IconOffsetPosition_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_Enumerator_System_Int32_IconPlacementScaler_IconOffsetPosition_.h>
#include <Modloader/app/structs/IconPlacementScaler_IconOffsetPosition.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_Int32_IconPlacementScaler_IconOffsetPosition_ {
    IL2CPP_REGISTER_METHOD(0x02BA5090, bool, ContainsKey, app::Dictionary_2_System_Int32_IconPlacementScaler_IconOffsetPosition_* this_ptr, int32_t key)
    IL2CPP_REGISTER_METHOD(
        0x02BB8880,
        app::IconPlacementScaler_IconOffsetPosition*,
        get_Item,
        app::Dictionary_2_System_Int32_IconPlacementScaler_IconOffsetPosition_* this_ptr,
        int32_t key
    )
    IL2CPP_REGISTER_METHOD(
        0x02BAC170,
        void,
        Add,
        app::Dictionary_2_System_Int32_IconPlacementScaler_IconOffsetPosition_* this_ptr,
        int32_t key,
        app::IconPlacementScaler_IconOffsetPosition* value
    )
    IL2CPP_REGISTER_METHOD(0x02BBA360, bool, Remove, app::Dictionary_2_System_Int32_IconPlacementScaler_IconOffsetPosition_* this_ptr, int32_t key)
    IL2CPP_REGISTER_METHOD(
        0x02BA5400,
        app::Dictionary_2_TKey_TValue_Enumerator_System_Int32_IconPlacementScaler_IconOffsetPosition_,
        GetEnumerator,
        app::Dictionary_2_System_Int32_IconPlacementScaler_IconOffsetPosition_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, app::Dictionary_2_System_Int32_IconPlacementScaler_IconOffsetPosition_* this_ptr)
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_Int32_IconPlacementScaler_IconOffsetPosition_

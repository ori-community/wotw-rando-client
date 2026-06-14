#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_StatisticsManager_StatType_StatisticsManager_RuntimeStatEntry_.h>
#include <Modloader/app/structs/Dictionary_2_TKe_TVal_ValueCollecti_StatisticsManag_StatTy_StatisticsManag_RuntimeStatEnt_.h>
#include <Modloader/app/structs/StatisticsManager_RuntimeStatEntry.h>
#include <Modloader/app/structs/StatisticsManager_StatType__Enum.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_StatisticsManager_StatType_StatisticsManager_RuntimeStatEntry_ {
    IL2CPP_REGISTER_METHOD(0x0283B900, void, Clear, app::Dictionary_2_StatisticsManager_StatType_StatisticsManager_RuntimeStatEntry_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02BAC140,
        void,
        set_Item,
        app::Dictionary_2_StatisticsManager_StatType_StatisticsManager_RuntimeStatEntry_* this_ptr,
        app::StatisticsManager_StatType__Enum key,
        app::StatisticsManager_RuntimeStatEntry* value
    )
    IL2CPP_REGISTER_METHOD(
        0x0283B3E0,
        app::Dictionary_2_TKey_TValue_ValueCollection_StatisticsManager_StatType_StatisticsManager_RuntimeStatEntry_*,
        get_Values,
        app::Dictionary_2_StatisticsManager_StatType_StatisticsManager_RuntimeStatEntry_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02C35530,
        app::StatisticsManager_RuntimeStatEntry*,
        get_Item,
        app::Dictionary_2_StatisticsManager_StatType_StatisticsManager_RuntimeStatEntry_* this_ptr,
        app::StatisticsManager_StatType__Enum key
    )
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, app::Dictionary_2_StatisticsManager_StatType_StatisticsManager_RuntimeStatEntry_* this_ptr)
} // namespace app::classes::System::Collections::Generic::Dictionary_2_StatisticsManager_StatType_StatisticsManager_RuntimeStatEntry_

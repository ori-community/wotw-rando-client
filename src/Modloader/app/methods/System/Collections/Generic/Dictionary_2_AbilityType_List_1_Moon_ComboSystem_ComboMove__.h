#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AbilityType__Enum.h>
#include <Modloader/app/structs/Dictionary_2_AbilityType_List_1_Moon_ComboSystem_ComboMove_.h>
#include <Modloader/app/structs/List_1_Moon_ComboSystem_ComboMove_.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_AbilityType_List_1_Moon_ComboSystem_ComboMove__ {
    IL2CPP_REGISTER_METHOD(
        0x02EAA0E0,
        app::List_1_Moon_ComboSystem_ComboMove_*,
        get_Item,
        app::Dictionary_2_AbilityType_List_1_Moon_ComboSystem_ComboMove_* this_ptr,
        app::AbilityType__Enum key
    )
    IL2CPP_REGISTER_METHOD(
        0x02BA5090,
        bool,
        ContainsKey,
        app::Dictionary_2_AbilityType_List_1_Moon_ComboSystem_ComboMove_* this_ptr,
        app::AbilityType__Enum key
    )
    IL2CPP_REGISTER_METHOD(
        0x02BAC170,
        void,
        Add,
        app::Dictionary_2_AbilityType_List_1_Moon_ComboSystem_ComboMove_* this_ptr,
        app::AbilityType__Enum key,
        app::List_1_Moon_ComboSystem_ComboMove_* value
    )
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, app::Dictionary_2_AbilityType_List_1_Moon_ComboSystem_ComboMove_* this_ptr)
} // namespace app::classes::System::Collections::Generic::Dictionary_2_AbilityType_List_1_Moon_ComboSystem_ComboMove__

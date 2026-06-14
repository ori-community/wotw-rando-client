#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_System_UInt32_List_1_Moon_Timeline_Reaction_.h>
#include <Modloader/app/structs/List_1_Moon_Timeline_Reaction_.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_UInt32_List_1_Moon_Timeline_Reaction__ {
    IL2CPP_REGISTER_METHOD(0x0283B2A0, int32_t, get_Count, app::Dictionary_2_System_UInt32_List_1_Moon_Timeline_Reaction_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0283B900, void, Clear, app::Dictionary_2_System_UInt32_List_1_Moon_Timeline_Reaction_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02BBA760,
        bool,
        TryGetValue,
        app::Dictionary_2_System_UInt32_List_1_Moon_Timeline_Reaction_* this_ptr,
        uint32_t key,
        app::List_1_Moon_Timeline_Reaction_** value
    )
    IL2CPP_REGISTER_METHOD(
        0x02BAC140,
        void,
        set_Item,
        app::Dictionary_2_System_UInt32_List_1_Moon_Timeline_Reaction_* this_ptr,
        uint32_t key,
        app::List_1_Moon_Timeline_Reaction_* value
    )
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, app::Dictionary_2_System_UInt32_List_1_Moon_Timeline_Reaction_* this_ptr)
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_UInt32_List_1_Moon_Timeline_Reaction__

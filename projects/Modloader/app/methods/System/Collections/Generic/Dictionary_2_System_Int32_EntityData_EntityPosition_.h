#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_System_Int32_EntityData_EntityPosition_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_KeyCollection_System_Int32_EntityData_EntityPosition_.h>
#include <Modloader/app/structs/EntityData_EntityPosition.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_Int32_EntityData_EntityPosition_ {
    IL2CPP_REGISTER_METHOD(0x02BA5090, bool, ContainsKey, app::Dictionary_2_System_Int32_EntityData_EntityPosition_* this_ptr, int32_t key)
    IL2CPP_REGISTER_METHOD(
        0x02BAC170,
        void,
        Add,
        app::Dictionary_2_System_Int32_EntityData_EntityPosition_* this_ptr,
        int32_t key,
        app::EntityData_EntityPosition* value
    )
    IL2CPP_REGISTER_METHOD(
        0x02BAC140,
        void,
        set_Item,
        app::Dictionary_2_System_Int32_EntityData_EntityPosition_* this_ptr,
        int32_t key,
        app::EntityData_EntityPosition* value
    )
    IL2CPP_REGISTER_METHOD(0x0283B900, void, Clear, app::Dictionary_2_System_Int32_EntityData_EntityPosition_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, app::Dictionary_2_System_Int32_EntityData_EntityPosition_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0283B2B0,
        app::Dictionary_2_TKey_TValue_KeyCollection_System_Int32_EntityData_EntityPosition_*,
        get_Keys,
        app::Dictionary_2_System_Int32_EntityData_EntityPosition_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02BB8880,
        app::EntityData_EntityPosition*,
        get_Item,
        app::Dictionary_2_System_Int32_EntityData_EntityPosition_* this_ptr,
        int32_t key
    )
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_Int32_EntityData_EntityPosition_

#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_SpellInventory_Binding_EquipmentType_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_Enumerator_SpellInventory_Binding_EquipmentType_.h>
#include <Modloader/app/structs/EquipmentType__Enum.h>
#include <Modloader/app/structs/SpellInventory_Binding__Enum.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_SpellInventory_Binding_EquipmentType_ {
    IL2CPP_REGISTER_METHOD(
        0x02BAC6E0,
        app::Dictionary_2_TKey_TValue_Enumerator_SpellInventory_Binding_EquipmentType_,
        GetEnumerator,
        app::Dictionary_2_SpellInventory_Binding_EquipmentType_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02BA5090,
        bool,
        ContainsKey,
        app::Dictionary_2_SpellInventory_Binding_EquipmentType_* this_ptr,
        app::SpellInventory_Binding__Enum key
    )
    IL2CPP_REGISTER_METHOD(
        0x02C32600,
        app::EquipmentType__Enum,
        get_Item,
        app::Dictionary_2_SpellInventory_Binding_EquipmentType_* this_ptr,
        app::SpellInventory_Binding__Enum key
    )
    IL2CPP_REGISTER_METHOD(0x0283B900, void, Clear, app::Dictionary_2_SpellInventory_Binding_EquipmentType_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02C33D50, bool, Remove, app::Dictionary_2_SpellInventory_Binding_EquipmentType_* this_ptr, app::SpellInventory_Binding__Enum key)
    IL2CPP_REGISTER_METHOD(
        0x02BAC140,
        void,
        set_Item,
        app::Dictionary_2_SpellInventory_Binding_EquipmentType_* this_ptr,
        app::SpellInventory_Binding__Enum key,
        app::EquipmentType__Enum value
    )
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, app::Dictionary_2_SpellInventory_Binding_EquipmentType_* this_ptr)
} // namespace app::classes::System::Collections::Generic::Dictionary_2_SpellInventory_Binding_EquipmentType_

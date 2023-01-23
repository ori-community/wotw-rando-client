#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/KeyValuePair_2_SpellInventory_Binding_EquipmentType___Array__Class.h>
#include <Modloader/app/structs/KeyValuePair_2_SpellInventory_Binding_EquipmentType___Array.h>

namespace app::classes::types {
    namespace KeyValuePair_2_SpellInventory_Binding_EquipmentType___Array {
        namespace {
            inline app::KeyValuePair_2_SpellInventory_Binding_EquipmentType___Array__Class* type_info_ref = nullptr;
        }
        inline app::KeyValuePair_2_SpellInventory_Binding_EquipmentType___Array__Class** type_info = &type_info_ref;
        inline app::KeyValuePair_2_SpellInventory_Binding_EquipmentType___Array__Class* get_class() {
            return il2cpp::get_class<app::KeyValuePair_2_SpellInventory_Binding_EquipmentType___Array__Class>(type_info, "System.Collections.Generic", "KeyValuePair`2[SpellInventory+Binding,EquipmentType][]");
        }
        inline app::KeyValuePair_2_SpellInventory_Binding_EquipmentType___Array* create() {
            return il2cpp::create_object<app::KeyValuePair_2_SpellInventory_Binding_EquipmentType___Array>(get_class());
        }
    } // namespace KeyValuePair_2_SpellInventory_Binding_EquipmentType___Array
} // namespace app::classes::types

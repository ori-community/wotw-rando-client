#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/EquipmentUIInventoryItem__Array__Class.h>
#include <Modloader/app/structs/EquipmentUIInventoryItem__Array.h>

namespace app::classes::types {
    namespace EquipmentUIInventoryItem__Array {
        namespace {
            inline app::EquipmentUIInventoryItem__Array__Class* type_info_ref = nullptr;
        }
        inline app::EquipmentUIInventoryItem__Array__Class** type_info = &type_info_ref;
        inline app::EquipmentUIInventoryItem__Array__Class* get_class() {
            return il2cpp::get_class<app::EquipmentUIInventoryItem__Array__Class>(type_info, "", "EquipmentUIInventoryItem[]");
        }
        inline app::EquipmentUIInventoryItem__Array* create() {
            return il2cpp::create_object<app::EquipmentUIInventoryItem__Array>(get_class());
        }
    } // namespace EquipmentUIInventoryItem__Array
} // namespace app::classes::types

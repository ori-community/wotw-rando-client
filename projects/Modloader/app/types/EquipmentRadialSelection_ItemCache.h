#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/EquipmentRadialSelection_ItemCache__Class.h>
#include <Modloader/app/structs/EquipmentRadialSelection_ItemCache.h>
#include <Modloader/app/structs/EquipmentRadialSelection_ItemCache__Array.h>

namespace app::classes::types {
    namespace EquipmentRadialSelection_ItemCache {
        inline app::EquipmentRadialSelection_ItemCache__Class** type_info = (app::EquipmentRadialSelection_ItemCache__Class**)(modloader::win::memory::resolve_rva(0x0473C1E0));
        inline app::EquipmentRadialSelection_ItemCache__Class* get_class() {
            return il2cpp::get_nested_class<app::EquipmentRadialSelection_ItemCache__Class>(type_info, "", "EquipmentRadialSelection", "ItemCache");
        }
        inline app::EquipmentRadialSelection_ItemCache* create() {
            return il2cpp::create_object<app::EquipmentRadialSelection_ItemCache>(get_class());
        }
        inline app::EquipmentRadialSelection_ItemCache__Array* create_array(int size) {
            return il2cpp::array_new<app::EquipmentRadialSelection_ItemCache__Array>(get_class(), size);
        }
        inline app::EquipmentRadialSelection_ItemCache__Array* create_array(const std::vector<app::EquipmentRadialSelection_ItemCache*>& items) {
            return il2cpp::array_new<app::EquipmentRadialSelection_ItemCache__Array>(get_class(), items);
        }
    } // namespace EquipmentRadialSelection_ItemCache
} // namespace app::classes::types

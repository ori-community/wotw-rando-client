#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/InventoryScreenHealthEnergyElements__Class.h>
#include <Modloader/app/structs/InventoryScreenHealthEnergyElements.h>

namespace app::classes::types {
    namespace InventoryScreenHealthEnergyElements {
        namespace {
            inline app::InventoryScreenHealthEnergyElements__Class* type_info_ref = nullptr;
        }
        inline app::InventoryScreenHealthEnergyElements__Class** type_info = &type_info_ref;
        inline app::InventoryScreenHealthEnergyElements__Class* get_class() {
            return il2cpp::get_class<app::InventoryScreenHealthEnergyElements__Class>(type_info, "", "InventoryScreenHealthEnergyElements");
        }
        inline app::InventoryScreenHealthEnergyElements* create() {
            return il2cpp::create_object<app::InventoryScreenHealthEnergyElements>(get_class());
        }
    } // namespace InventoryScreenHealthEnergyElements
} // namespace app::classes::types

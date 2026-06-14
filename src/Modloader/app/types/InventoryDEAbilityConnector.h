#pragma once
#include <Modloader/app/structs/InventoryDEAbilityConnector.h>
#include <Modloader/app/structs/InventoryDEAbilityConnector__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InventoryDEAbilityConnector {
        inline app::InventoryDEAbilityConnector__Class** type_info() {
            static app::InventoryDEAbilityConnector__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::InventoryDEAbilityConnector__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::InventoryDEAbilityConnector__Class* get_class() {
            return il2cpp::get_class<app::InventoryDEAbilityConnector__Class>(type_info(), "", "InventoryDEAbilityConnector");
        }
        inline app::InventoryDEAbilityConnector* create() {
            return il2cpp::create_object<app::InventoryDEAbilityConnector>(get_class());
        }
    } // namespace InventoryDEAbilityConnector
} // namespace app::classes::types

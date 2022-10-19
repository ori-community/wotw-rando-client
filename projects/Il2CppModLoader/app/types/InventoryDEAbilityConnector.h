#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace InventoryDEAbilityConnector {
        namespace {
            inline app::InventoryDEAbilityConnector__Class* type_info_ref = nullptr;
        }
        inline app::InventoryDEAbilityConnector__Class** type_info = &type_info_ref;
        inline app::InventoryDEAbilityConnector__Class* get_class() {
            return il2cpp::get_class<app::InventoryDEAbilityConnector__Class>(type_info, "", "InventoryDEAbilityConnector");
        }
        inline app::InventoryDEAbilityConnector* create() {
            return il2cpp::create_object<app::InventoryDEAbilityConnector>(get_class());
        }
    } // namespace InventoryDEAbilityConnector
} // namespace app::classes::types

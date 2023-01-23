#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/InventoryDEAbilityConnector__Class.h>
#include <Modloader/app/structs/InventoryDEAbilityConnector.h>

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

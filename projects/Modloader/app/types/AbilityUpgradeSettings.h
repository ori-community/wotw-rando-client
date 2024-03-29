#pragma once
#include <Modloader/app/structs/AbilityUpgradeSettings.h>
#include <Modloader/app/structs/AbilityUpgradeSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AbilityUpgradeSettings {
        inline app::AbilityUpgradeSettings__Class** type_info() {
            static app::AbilityUpgradeSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AbilityUpgradeSettings__Class**)(modloader::win::memory::resolve_rva(0x04732DE0));
            }
            return cache;
        }
        inline app::AbilityUpgradeSettings__Class* get_class() {
            return il2cpp::get_class<app::AbilityUpgradeSettings__Class>(type_info(), "", "AbilityUpgradeSettings");
        }
        inline app::AbilityUpgradeSettings* create() {
            return il2cpp::create_object<app::AbilityUpgradeSettings>(get_class());
        }
    } // namespace AbilityUpgradeSettings
} // namespace app::classes::types

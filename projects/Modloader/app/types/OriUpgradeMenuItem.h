#pragma once
#include <Modloader/app/structs/OriUpgradeMenuItem.h>
#include <Modloader/app/structs/OriUpgradeMenuItem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OriUpgradeMenuItem {
        inline app::OriUpgradeMenuItem__Class** type_info() {
            static app::OriUpgradeMenuItem__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::OriUpgradeMenuItem__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::OriUpgradeMenuItem__Class* get_class() {
            return il2cpp::get_class<app::OriUpgradeMenuItem__Class>(type_info(), "", "OriUpgradeMenuItem");
        }
        inline app::OriUpgradeMenuItem* create() {
            return il2cpp::create_object<app::OriUpgradeMenuItem>(get_class());
        }
    } // namespace OriUpgradeMenuItem
} // namespace app::classes::types

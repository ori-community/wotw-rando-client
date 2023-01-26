#pragma once
#include <Modloader/app/structs/LegacyHealthBar.h>
#include <Modloader/app/structs/LegacyHealthBar__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LegacyHealthBar {
        inline app::LegacyHealthBar__Class** type_info() {
            static app::LegacyHealthBar__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LegacyHealthBar__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LegacyHealthBar__Class* get_class() {
            return il2cpp::get_class<app::LegacyHealthBar__Class>(type_info(), "", "LegacyHealthBar");
        }
        inline app::LegacyHealthBar* create() {
            return il2cpp::create_object<app::LegacyHealthBar>(get_class());
        }
    } // namespace LegacyHealthBar
} // namespace app::classes::types

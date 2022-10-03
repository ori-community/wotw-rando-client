#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LegacyHealthBar {
        namespace {
            app::LegacyHealthBar__Class* type_info_ref = nullptr;
        }
        app::LegacyHealthBar__Class** type_info = &type_info_ref;
        inline app::LegacyHealthBar__Class* get_class() {
            return il2cpp::get_class<app::LegacyHealthBar__Class>(type_info, "", "LegacyHealthBar");
        }
        inline app::LegacyHealthBar* create() {
            return il2cpp::create_object<app::LegacyHealthBar>(get_class());
        }
    } // namespace LegacyHealthBar
} // namespace app::classes::types

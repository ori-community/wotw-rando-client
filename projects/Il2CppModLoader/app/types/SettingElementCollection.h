#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SettingElementCollection {
        namespace {
            app::SettingElementCollection__Class* type_info_ref = nullptr;
        }
        app::SettingElementCollection__Class** type_info = &type_info_ref;
        inline app::SettingElementCollection__Class* get_class() {
            return il2cpp::get_class<app::SettingElementCollection__Class>(type_info, "System.Configuration", "SettingElementCollection");
        }
        inline app::SettingElementCollection* create() {
            return il2cpp::create_object<app::SettingElementCollection>(get_class());
        }
    } // namespace SettingElementCollection
} // namespace app::classes::types

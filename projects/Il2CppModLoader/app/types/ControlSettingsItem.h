#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ControlSettingsItem {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ControlSettingsItem__Class** type_info;
        inline app::ControlSettingsItem__Class* get_class() {
            return il2cpp::get_class<app::ControlSettingsItem__Class>(type_info, "", "ControlSettingsItem");
        }
        inline app::ControlSettingsItem* create() {
            return il2cpp::create_object<app::ControlSettingsItem>(get_class());
        }
        inline app::ControlSettingsItem__Array* create_array(int size) {
            return il2cpp::array_new<app::ControlSettingsItem__Array>(get_class(), size);
        }
    } // namespace ControlSettingsItem
} // namespace app::classes::types

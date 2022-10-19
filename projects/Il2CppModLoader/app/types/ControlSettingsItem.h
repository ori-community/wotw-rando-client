#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ControlSettingsItem {
        inline app::ControlSettingsItem__Class** type_info = (app::ControlSettingsItem__Class**)(modloader::win::memory::resolve_rva(0x047151F0));
        inline app::ControlSettingsItem__Class* get_class() {
            return il2cpp::get_class<app::ControlSettingsItem__Class>(type_info, "", "ControlSettingsItem");
        }
        inline app::ControlSettingsItem* create() {
            return il2cpp::create_object<app::ControlSettingsItem>(get_class());
        }
        inline app::ControlSettingsItem__Array* create_array(int size) {
            return il2cpp::array_new<app::ControlSettingsItem__Array>(get_class(), size);
        }
        inline app::ControlSettingsItem__Array* create_array(const std::vector<app::ControlSettingsItem*>& items) {
            return il2cpp::array_new<app::ControlSettingsItem__Array>(get_class(), items);
        }
    } // namespace ControlSettingsItem
} // namespace app::classes::types

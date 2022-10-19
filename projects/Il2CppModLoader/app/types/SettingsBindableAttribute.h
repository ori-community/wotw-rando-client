#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SettingsBindableAttribute {
        inline app::SettingsBindableAttribute__Class** type_info = (app::SettingsBindableAttribute__Class**)(modloader::win::memory::resolve_rva(0x04728A10));
        inline app::SettingsBindableAttribute__Class* get_class() {
            return il2cpp::get_class<app::SettingsBindableAttribute__Class>(type_info, "System.ComponentModel", "SettingsBindableAttribute");
        }
        inline app::SettingsBindableAttribute* create() {
            return il2cpp::create_object<app::SettingsBindableAttribute>(get_class());
        }
    } // namespace SettingsBindableAttribute
} // namespace app::classes::types

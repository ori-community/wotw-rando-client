#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ControlSettingsItem__Array {
        namespace {
            inline app::ControlSettingsItem__Array__Class* type_info_ref = nullptr;
        }
        inline app::ControlSettingsItem__Array__Class** type_info = &type_info_ref;
        inline app::ControlSettingsItem__Array__Class* get_class() {
            return il2cpp::get_class<app::ControlSettingsItem__Array__Class>(type_info, "", "ControlSettingsItem[]");
        }
        inline app::ControlSettingsItem__Array* create() {
            return il2cpp::create_object<app::ControlSettingsItem__Array>(get_class());
        }
    } // namespace ControlSettingsItem__Array
} // namespace app::classes::types

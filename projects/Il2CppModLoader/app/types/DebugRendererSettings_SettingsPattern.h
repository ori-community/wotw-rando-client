#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DebugRendererSettings_SettingsPattern {
        namespace {
            inline app::DebugRendererSettings_SettingsPattern__Class* type_info_ref = nullptr;
        }
        inline app::DebugRendererSettings_SettingsPattern__Class** type_info = &type_info_ref;
        inline app::DebugRendererSettings_SettingsPattern__Class* get_class() {
            return il2cpp::get_nested_class<app::DebugRendererSettings_SettingsPattern__Class>(type_info, "", "DebugRendererSettings", "SettingsPattern");
        }
        inline app::DebugRendererSettings_SettingsPattern* create() {
            return il2cpp::create_object<app::DebugRendererSettings_SettingsPattern>(get_class());
        }
        inline app::DebugRendererSettings_SettingsPattern__Array* create_array(int size) {
            return il2cpp::array_new<app::DebugRendererSettings_SettingsPattern__Array>(get_class(), size);
        }
        inline app::DebugRendererSettings_SettingsPattern__Array* create_array(const std::vector<app::DebugRendererSettings_SettingsPattern*>& items) {
            return il2cpp::array_new<app::DebugRendererSettings_SettingsPattern__Array>(get_class(), items);
        }
    } // namespace DebugRendererSettings_SettingsPattern
} // namespace app::classes::types

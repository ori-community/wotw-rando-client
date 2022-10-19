#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DebugRendererSettings_SettingsPattern__Array {
        namespace {
            inline app::DebugRendererSettings_SettingsPattern__Array__Class* type_info_ref = nullptr;
        }
        inline app::DebugRendererSettings_SettingsPattern__Array__Class** type_info = &type_info_ref;
        inline app::DebugRendererSettings_SettingsPattern__Array__Class* get_class() {
            return il2cpp::get_class<app::DebugRendererSettings_SettingsPattern__Array__Class>(type_info, "", "DebugRendererSettings+SettingsPattern[]");
        }
        inline app::DebugRendererSettings_SettingsPattern__Array* create() {
            return il2cpp::create_object<app::DebugRendererSettings_SettingsPattern__Array>(get_class());
        }
    } // namespace DebugRendererSettings_SettingsPattern__Array
} // namespace app::classes::types

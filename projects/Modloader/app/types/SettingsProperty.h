#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SettingsProperty {
        namespace {
            inline app::SettingsProperty__Class* type_info_ref = nullptr;
        }
        inline app::SettingsProperty__Class** type_info = &type_info_ref;
        inline app::SettingsProperty__Class* get_class() {
            return il2cpp::get_class<app::SettingsProperty__Class>(type_info, "System.Configuration", "SettingsProperty");
        }
        inline app::SettingsProperty* create() {
            return il2cpp::create_object<app::SettingsProperty>(get_class());
        }
    } // namespace SettingsProperty
} // namespace app::classes::types

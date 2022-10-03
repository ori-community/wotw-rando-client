#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SettingsProviderAttribute {
        namespace {
            app::SettingsProviderAttribute__Class* type_info_ref = nullptr;
        }
        app::SettingsProviderAttribute__Class** type_info = &type_info_ref;
        inline app::SettingsProviderAttribute__Class* get_class() {
            return il2cpp::get_class<app::SettingsProviderAttribute__Class>(type_info, "System.Configuration", "SettingsProviderAttribute");
        }
        inline app::SettingsProviderAttribute* create() {
            return il2cpp::create_object<app::SettingsProviderAttribute>(get_class());
        }
    } // namespace SettingsProviderAttribute
} // namespace app::classes::types

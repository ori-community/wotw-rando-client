#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SettingsBase {
        namespace {
            app::SettingsBase__Class* type_info_ref = nullptr;
        }
        app::SettingsBase__Class** type_info = &type_info_ref;
        inline app::SettingsBase__Class* get_class() {
            return il2cpp::get_class<app::SettingsBase__Class>(type_info, "System.Configuration", "SettingsBase");
        }
        inline app::SettingsBase* create() {
            return il2cpp::create_object<app::SettingsBase>(get_class());
        }
    } // namespace SettingsBase
} // namespace app::classes::types

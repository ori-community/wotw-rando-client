#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SettingsPropertyValueCollection {
        namespace {
            inline app::SettingsPropertyValueCollection__Class* type_info_ref = nullptr;
        }
        inline app::SettingsPropertyValueCollection__Class** type_info = &type_info_ref;
        inline app::SettingsPropertyValueCollection__Class* get_class() {
            return il2cpp::get_class<app::SettingsPropertyValueCollection__Class>(type_info, "System.Configuration", "SettingsPropertyValueCollection");
        }
        inline app::SettingsPropertyValueCollection* create() {
            return il2cpp::create_object<app::SettingsPropertyValueCollection>(get_class());
        }
    } // namespace SettingsPropertyValueCollection
} // namespace app::classes::types

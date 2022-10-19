#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SettingsProviderCollection {
        namespace {
            inline app::SettingsProviderCollection__Class* type_info_ref = nullptr;
        }
        inline app::SettingsProviderCollection__Class** type_info = &type_info_ref;
        inline app::SettingsProviderCollection__Class* get_class() {
            return il2cpp::get_class<app::SettingsProviderCollection__Class>(type_info, "System.Configuration", "SettingsProviderCollection");
        }
        inline app::SettingsProviderCollection* create() {
            return il2cpp::create_object<app::SettingsProviderCollection>(get_class());
        }
    } // namespace SettingsProviderCollection
} // namespace app::classes::types

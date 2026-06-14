#pragma once
#include <Modloader/app/structs/SettingsProviderCollection.h>
#include <Modloader/app/structs/SettingsProviderCollection__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SettingsProviderCollection {
        inline app::SettingsProviderCollection__Class** type_info() {
            static app::SettingsProviderCollection__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SettingsProviderCollection__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SettingsProviderCollection__Class* get_class() {
            return il2cpp::get_class<app::SettingsProviderCollection__Class>(type_info(), "System.Configuration", "SettingsProviderCollection");
        }
        inline app::SettingsProviderCollection* create() {
            return il2cpp::create_object<app::SettingsProviderCollection>(get_class());
        }
    } // namespace SettingsProviderCollection
} // namespace app::classes::types

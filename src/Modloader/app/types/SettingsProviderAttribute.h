#pragma once
#include <Modloader/app/structs/SettingsProviderAttribute.h>
#include <Modloader/app/structs/SettingsProviderAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SettingsProviderAttribute {
        inline app::SettingsProviderAttribute__Class** type_info() {
            static app::SettingsProviderAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SettingsProviderAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SettingsProviderAttribute__Class* get_class() {
            return il2cpp::get_class<app::SettingsProviderAttribute__Class>(type_info(), "System.Configuration", "SettingsProviderAttribute");
        }
        inline app::SettingsProviderAttribute* create() {
            return il2cpp::create_object<app::SettingsProviderAttribute>(get_class());
        }
    } // namespace SettingsProviderAttribute
} // namespace app::classes::types

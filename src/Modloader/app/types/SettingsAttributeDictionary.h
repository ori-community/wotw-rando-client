#pragma once
#include <Modloader/app/structs/SettingsAttributeDictionary.h>
#include <Modloader/app/structs/SettingsAttributeDictionary__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SettingsAttributeDictionary {
        inline app::SettingsAttributeDictionary__Class** type_info() {
            static app::SettingsAttributeDictionary__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SettingsAttributeDictionary__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SettingsAttributeDictionary__Class* get_class() {
            return il2cpp::get_class<app::SettingsAttributeDictionary__Class>(type_info(), "System.Configuration", "SettingsAttributeDictionary");
        }
        inline app::SettingsAttributeDictionary* create() {
            return il2cpp::create_object<app::SettingsAttributeDictionary>(get_class());
        }
    } // namespace SettingsAttributeDictionary
} // namespace app::classes::types

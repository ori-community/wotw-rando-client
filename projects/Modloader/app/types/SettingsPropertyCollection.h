#pragma once
#include <Modloader/app/structs/SettingsPropertyCollection.h>
#include <Modloader/app/structs/SettingsPropertyCollection__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SettingsPropertyCollection {
        inline app::SettingsPropertyCollection__Class** type_info() {
            static app::SettingsPropertyCollection__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SettingsPropertyCollection__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SettingsPropertyCollection__Class* get_class() {
            return il2cpp::get_class<app::SettingsPropertyCollection__Class>(type_info(), "System.Configuration", "SettingsPropertyCollection");
        }
        inline app::SettingsPropertyCollection* create() {
            return il2cpp::create_object<app::SettingsPropertyCollection>(get_class());
        }
    } // namespace SettingsPropertyCollection
} // namespace app::classes::types

#pragma once
#include <Modloader/app/structs/SettingElementCollection.h>
#include <Modloader/app/structs/SettingElementCollection__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SettingElementCollection {
        inline app::SettingElementCollection__Class** type_info() {
            static app::SettingElementCollection__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SettingElementCollection__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SettingElementCollection__Class* get_class() {
            return il2cpp::get_class<app::SettingElementCollection__Class>(type_info(), "System.Configuration", "SettingElementCollection");
        }
        inline app::SettingElementCollection* create() {
            return il2cpp::create_object<app::SettingElementCollection>(get_class());
        }
    } // namespace SettingElementCollection
} // namespace app::classes::types

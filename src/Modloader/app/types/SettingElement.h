#pragma once
#include <Modloader/app/structs/SettingElement.h>
#include <Modloader/app/structs/SettingElement__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SettingElement {
        inline app::SettingElement__Class** type_info() {
            static app::SettingElement__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SettingElement__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SettingElement__Class* get_class() {
            return il2cpp::get_class<app::SettingElement__Class>(type_info(), "System.Configuration", "SettingElement");
        }
        inline app::SettingElement* create() {
            return il2cpp::create_object<app::SettingElement>(get_class());
        }
    } // namespace SettingElement
} // namespace app::classes::types

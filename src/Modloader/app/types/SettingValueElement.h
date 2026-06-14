#pragma once
#include <Modloader/app/structs/SettingValueElement.h>
#include <Modloader/app/structs/SettingValueElement__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SettingValueElement {
        inline app::SettingValueElement__Class** type_info() {
            static app::SettingValueElement__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SettingValueElement__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SettingValueElement__Class* get_class() {
            return il2cpp::get_class<app::SettingValueElement__Class>(type_info(), "System.Configuration", "SettingValueElement");
        }
        inline app::SettingValueElement* create() {
            return il2cpp::create_object<app::SettingValueElement>(get_class());
        }
    } // namespace SettingValueElement
} // namespace app::classes::types

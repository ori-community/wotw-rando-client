#pragma once
#include <Modloader/app/structs/SchemeSettingElement.h>
#include <Modloader/app/structs/SchemeSettingElement__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SchemeSettingElement {
        inline app::SchemeSettingElement__Class** type_info() {
            static app::SchemeSettingElement__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SchemeSettingElement__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SchemeSettingElement__Class* get_class() {
            return il2cpp::get_class<app::SchemeSettingElement__Class>(type_info(), "System.Configuration", "SchemeSettingElement");
        }
        inline app::SchemeSettingElement* create() {
            return il2cpp::create_object<app::SchemeSettingElement>(get_class());
        }
    } // namespace SchemeSettingElement
} // namespace app::classes::types

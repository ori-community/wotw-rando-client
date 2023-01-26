#pragma once
#include <Modloader/app/structs/SchemeSettingElementCollection.h>
#include <Modloader/app/structs/SchemeSettingElementCollection__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SchemeSettingElementCollection {
        inline app::SchemeSettingElementCollection__Class** type_info() {
            static app::SchemeSettingElementCollection__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SchemeSettingElementCollection__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SchemeSettingElementCollection__Class* get_class() {
            return il2cpp::get_class<app::SchemeSettingElementCollection__Class>(type_info(), "System.Configuration", "SchemeSettingElementCollection");
        }
        inline app::SchemeSettingElementCollection* create() {
            return il2cpp::create_object<app::SchemeSettingElementCollection>(get_class());
        }
    } // namespace SchemeSettingElementCollection
} // namespace app::classes::types

#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SchemeSettingElementCollection {
        namespace {
            app::SchemeSettingElementCollection__Class* type_info_ref = nullptr;
        }
        app::SchemeSettingElementCollection__Class** type_info = &type_info_ref;
        inline app::SchemeSettingElementCollection__Class* get_class() {
            return il2cpp::get_class<app::SchemeSettingElementCollection__Class>(type_info, "System.Configuration", "SchemeSettingElementCollection");
        }
        inline app::SchemeSettingElementCollection* create() {
            return il2cpp::create_object<app::SchemeSettingElementCollection>(get_class());
        }
    } // namespace SchemeSettingElementCollection
} // namespace app::classes::types

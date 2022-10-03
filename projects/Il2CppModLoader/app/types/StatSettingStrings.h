#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StatSettingStrings {
        namespace {
            app::StatSettingStrings__Class* type_info_ref = nullptr;
        }
        app::StatSettingStrings__Class** type_info = &type_info_ref;
        inline app::StatSettingStrings__Class* get_class() {
            return il2cpp::get_class<app::StatSettingStrings__Class>(type_info, "", "StatSettingStrings");
        }
        inline app::StatSettingStrings* create() {
            return il2cpp::create_object<app::StatSettingStrings>(get_class());
        }
    } // namespace StatSettingStrings
} // namespace app::classes::types

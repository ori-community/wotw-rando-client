#pragma once
#include <Modloader/app/structs/StatSettingStrings.h>
#include <Modloader/app/structs/StatSettingStrings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StatSettingStrings {
        inline app::StatSettingStrings__Class** type_info() {
            static app::StatSettingStrings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::StatSettingStrings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::StatSettingStrings__Class* get_class() {
            return il2cpp::get_class<app::StatSettingStrings__Class>(type_info(), "", "StatSettingStrings");
        }
        inline app::StatSettingStrings* create() {
            return il2cpp::create_object<app::StatSettingStrings>(get_class());
        }
    } // namespace StatSettingStrings
} // namespace app::classes::types

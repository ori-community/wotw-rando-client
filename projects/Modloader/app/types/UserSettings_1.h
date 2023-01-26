#pragma once
#include <Modloader/app/structs/UserSettings_1.h>
#include <Modloader/app/structs/UserSettings_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UserSettings_1 {
        inline app::UserSettings_1__Class** type_info() {
            static app::UserSettings_1__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UserSettings_1__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UserSettings_1__Class* get_class() {
            return il2cpp::get_class<app::UserSettings_1__Class>(type_info(), "PlayFab.ServerModels", "UserSettings");
        }
        inline app::UserSettings_1* create() {
            return il2cpp::create_object<app::UserSettings_1>(get_class());
        }
    } // namespace UserSettings_1
} // namespace app::classes::types

#pragma once
#include <Modloader/app/structs/UserSettingsGroup.h>
#include <Modloader/app/structs/UserSettingsGroup__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UserSettingsGroup {
        inline app::UserSettingsGroup__Class** type_info() {
            static app::UserSettingsGroup__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UserSettingsGroup__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UserSettingsGroup__Class* get_class() {
            return il2cpp::get_class<app::UserSettingsGroup__Class>(type_info(), "System.Configuration", "UserSettingsGroup");
        }
        inline app::UserSettingsGroup* create() {
            return il2cpp::create_object<app::UserSettingsGroup>(get_class());
        }
    } // namespace UserSettingsGroup
} // namespace app::classes::types

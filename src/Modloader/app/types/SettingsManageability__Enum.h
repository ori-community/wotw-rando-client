#pragma once
#include <Modloader/app/structs/SettingsManageability__Enum.h>
#include <Modloader/app/structs/SettingsManageability__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SettingsManageability__Enum {
        inline app::SettingsManageability__Enum__Class** type_info() {
            static app::SettingsManageability__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SettingsManageability__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SettingsManageability__Enum__Class* get_class() {
            return il2cpp::get_class<app::SettingsManageability__Enum__Class>(type_info(), "System.Configuration", "SettingsManageability");
        }
        inline app::SettingsManageability__Enum* create() {
            return il2cpp::create_object<app::SettingsManageability__Enum>(get_class());
        }
    } // namespace SettingsManageability__Enum
} // namespace app::classes::types

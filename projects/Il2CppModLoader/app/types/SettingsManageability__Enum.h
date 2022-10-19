#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SettingsManageability__Enum {
        namespace {
            inline app::SettingsManageability__Enum__Class* type_info_ref = nullptr;
        }
        inline app::SettingsManageability__Enum__Class** type_info = &type_info_ref;
        inline app::SettingsManageability__Enum__Class* get_class() {
            return il2cpp::get_class<app::SettingsManageability__Enum__Class>(type_info, "System.Configuration", "SettingsManageability");
        }
        inline app::SettingsManageability__Enum* create() {
            return il2cpp::create_object<app::SettingsManageability__Enum>(get_class());
        }
    } // namespace SettingsManageability__Enum
} // namespace app::classes::types

#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SettingValueElement {
        namespace {
            inline app::SettingValueElement__Class* type_info_ref = nullptr;
        }
        inline app::SettingValueElement__Class** type_info = &type_info_ref;
        inline app::SettingValueElement__Class* get_class() {
            return il2cpp::get_class<app::SettingValueElement__Class>(type_info, "System.Configuration", "SettingValueElement");
        }
        inline app::SettingValueElement* create() {
            return il2cpp::create_object<app::SettingValueElement>(get_class());
        }
    } // namespace SettingValueElement
} // namespace app::classes::types

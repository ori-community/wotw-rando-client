#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SettingsSerializeAs__Enum {
        namespace {
            inline app::SettingsSerializeAs__Enum__Class* type_info_ref = nullptr;
        }
        inline app::SettingsSerializeAs__Enum__Class** type_info = &type_info_ref;
        inline app::SettingsSerializeAs__Enum__Class* get_class() {
            return il2cpp::get_class<app::SettingsSerializeAs__Enum__Class>(type_info, "System.Configuration", "SettingsSerializeAs");
        }
        inline app::SettingsSerializeAs__Enum* create() {
            return il2cpp::create_object<app::SettingsSerializeAs__Enum>(get_class());
        }
    } // namespace SettingsSerializeAs__Enum
} // namespace app::classes::types

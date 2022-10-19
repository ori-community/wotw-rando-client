#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SettingsAttributeDictionary {
        namespace {
            inline app::SettingsAttributeDictionary__Class* type_info_ref = nullptr;
        }
        inline app::SettingsAttributeDictionary__Class** type_info = &type_info_ref;
        inline app::SettingsAttributeDictionary__Class* get_class() {
            return il2cpp::get_class<app::SettingsAttributeDictionary__Class>(type_info, "System.Configuration", "SettingsAttributeDictionary");
        }
        inline app::SettingsAttributeDictionary* create() {
            return il2cpp::create_object<app::SettingsAttributeDictionary>(get_class());
        }
    } // namespace SettingsAttributeDictionary
} // namespace app::classes::types

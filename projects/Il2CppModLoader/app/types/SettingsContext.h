#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SettingsContext {
        namespace {
            inline app::SettingsContext__Class* type_info_ref = nullptr;
        }
        inline app::SettingsContext__Class** type_info = &type_info_ref;
        inline app::SettingsContext__Class* get_class() {
            return il2cpp::get_class<app::SettingsContext__Class>(type_info, "System.Configuration", "SettingsContext");
        }
        inline app::SettingsContext* create() {
            return il2cpp::create_object<app::SettingsContext>(get_class());
        }
    } // namespace SettingsContext
} // namespace app::classes::types

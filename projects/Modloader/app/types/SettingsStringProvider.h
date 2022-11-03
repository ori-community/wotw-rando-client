#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SettingsStringProvider {
        namespace {
            inline app::SettingsStringProvider__Class* type_info_ref = nullptr;
        }
        inline app::SettingsStringProvider__Class** type_info = &type_info_ref;
        inline app::SettingsStringProvider__Class* get_class() {
            return il2cpp::get_class<app::SettingsStringProvider__Class>(type_info, "", "SettingsStringProvider");
        }
        inline app::SettingsStringProvider* create() {
            return il2cpp::create_object<app::SettingsStringProvider>(get_class());
        }
    } // namespace SettingsStringProvider
} // namespace app::classes::types

#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SettingsPropertyNotFoundException__Class.h>
#include <Modloader/app/structs/SettingsPropertyNotFoundException.h>

namespace app::classes::types {
    namespace SettingsPropertyNotFoundException {
        namespace {
            inline app::SettingsPropertyNotFoundException__Class* type_info_ref = nullptr;
        }
        inline app::SettingsPropertyNotFoundException__Class** type_info = &type_info_ref;
        inline app::SettingsPropertyNotFoundException__Class* get_class() {
            return il2cpp::get_class<app::SettingsPropertyNotFoundException__Class>(type_info, "System.Configuration", "SettingsPropertyNotFoundException");
        }
        inline app::SettingsPropertyNotFoundException* create() {
            return il2cpp::create_object<app::SettingsPropertyNotFoundException>(get_class());
        }
    } // namespace SettingsPropertyNotFoundException
} // namespace app::classes::types

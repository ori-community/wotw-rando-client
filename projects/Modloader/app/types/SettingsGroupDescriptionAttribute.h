#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SettingsGroupDescriptionAttribute {
        namespace {
            inline app::SettingsGroupDescriptionAttribute__Class* type_info_ref = nullptr;
        }
        inline app::SettingsGroupDescriptionAttribute__Class** type_info = &type_info_ref;
        inline app::SettingsGroupDescriptionAttribute__Class* get_class() {
            return il2cpp::get_class<app::SettingsGroupDescriptionAttribute__Class>(type_info, "System.Configuration", "SettingsGroupDescriptionAttribute");
        }
        inline app::SettingsGroupDescriptionAttribute* create() {
            return il2cpp::create_object<app::SettingsGroupDescriptionAttribute>(get_class());
        }
    } // namespace SettingsGroupDescriptionAttribute
} // namespace app::classes::types

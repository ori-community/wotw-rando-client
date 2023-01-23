#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SettingsPropertyValue__Class.h>
#include <Modloader/app/structs/SettingsPropertyValue.h>

namespace app::classes::types {
    namespace SettingsPropertyValue {
        namespace {
            inline app::SettingsPropertyValue__Class* type_info_ref = nullptr;
        }
        inline app::SettingsPropertyValue__Class** type_info = &type_info_ref;
        inline app::SettingsPropertyValue__Class* get_class() {
            return il2cpp::get_class<app::SettingsPropertyValue__Class>(type_info, "System.Configuration", "SettingsPropertyValue");
        }
        inline app::SettingsPropertyValue* create() {
            return il2cpp::create_object<app::SettingsPropertyValue>(get_class());
        }
    } // namespace SettingsPropertyValue
} // namespace app::classes::types

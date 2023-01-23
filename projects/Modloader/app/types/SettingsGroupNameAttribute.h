#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SettingsGroupNameAttribute__Class.h>
#include <Modloader/app/structs/SettingsGroupNameAttribute.h>

namespace app::classes::types {
    namespace SettingsGroupNameAttribute {
        namespace {
            inline app::SettingsGroupNameAttribute__Class* type_info_ref = nullptr;
        }
        inline app::SettingsGroupNameAttribute__Class** type_info = &type_info_ref;
        inline app::SettingsGroupNameAttribute__Class* get_class() {
            return il2cpp::get_class<app::SettingsGroupNameAttribute__Class>(type_info, "System.Configuration", "SettingsGroupNameAttribute");
        }
        inline app::SettingsGroupNameAttribute* create() {
            return il2cpp::create_object<app::SettingsGroupNameAttribute>(get_class());
        }
    } // namespace SettingsGroupNameAttribute
} // namespace app::classes::types

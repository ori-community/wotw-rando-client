#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DefaultSettingValueAttribute {
        namespace {
            inline app::DefaultSettingValueAttribute__Class* type_info_ref = nullptr;
        }
        inline app::DefaultSettingValueAttribute__Class** type_info = &type_info_ref;
        inline app::DefaultSettingValueAttribute__Class* get_class() {
            return il2cpp::get_class<app::DefaultSettingValueAttribute__Class>(type_info, "System.Configuration", "DefaultSettingValueAttribute");
        }
        inline app::DefaultSettingValueAttribute* create() {
            return il2cpp::create_object<app::DefaultSettingValueAttribute>(get_class());
        }
    } // namespace DefaultSettingValueAttribute
} // namespace app::classes::types

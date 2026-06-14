#pragma once
#include <Modloader/app/structs/DefaultSettingValueAttribute.h>
#include <Modloader/app/structs/DefaultSettingValueAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DefaultSettingValueAttribute {
        inline app::DefaultSettingValueAttribute__Class** type_info() {
            static app::DefaultSettingValueAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DefaultSettingValueAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DefaultSettingValueAttribute__Class* get_class() {
            return il2cpp::get_class<app::DefaultSettingValueAttribute__Class>(type_info(), "System.Configuration", "DefaultSettingValueAttribute");
        }
        inline app::DefaultSettingValueAttribute* create() {
            return il2cpp::create_object<app::DefaultSettingValueAttribute>(get_class());
        }
    } // namespace DefaultSettingValueAttribute
} // namespace app::classes::types

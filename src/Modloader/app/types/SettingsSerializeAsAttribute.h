#pragma once
#include <Modloader/app/structs/SettingsSerializeAsAttribute.h>
#include <Modloader/app/structs/SettingsSerializeAsAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SettingsSerializeAsAttribute {
        inline app::SettingsSerializeAsAttribute__Class** type_info() {
            static app::SettingsSerializeAsAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SettingsSerializeAsAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SettingsSerializeAsAttribute__Class* get_class() {
            return il2cpp::get_class<app::SettingsSerializeAsAttribute__Class>(type_info(), "System.Configuration", "SettingsSerializeAsAttribute");
        }
        inline app::SettingsSerializeAsAttribute* create() {
            return il2cpp::create_object<app::SettingsSerializeAsAttribute>(get_class());
        }
    } // namespace SettingsSerializeAsAttribute
} // namespace app::classes::types

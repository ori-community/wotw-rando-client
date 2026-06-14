#pragma once
#include <Modloader/app/structs/ControlSettingsItem__Array.h>
#include <Modloader/app/structs/ControlSettingsItem__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ControlSettingsItem__Array {
        inline app::ControlSettingsItem__Array__Class** type_info() {
            static app::ControlSettingsItem__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ControlSettingsItem__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ControlSettingsItem__Array__Class* get_class() {
            return il2cpp::get_class<app::ControlSettingsItem__Array__Class>(type_info(), "", "ControlSettingsItem[]");
        }
        inline app::ControlSettingsItem__Array* create() {
            return il2cpp::create_object<app::ControlSettingsItem__Array>(get_class());
        }
    } // namespace ControlSettingsItem__Array
} // namespace app::classes::types

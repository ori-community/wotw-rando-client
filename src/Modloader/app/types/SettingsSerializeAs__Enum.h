#pragma once
#include <Modloader/app/structs/SettingsSerializeAs__Enum.h>
#include <Modloader/app/structs/SettingsSerializeAs__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SettingsSerializeAs__Enum {
        inline app::SettingsSerializeAs__Enum__Class** type_info() {
            static app::SettingsSerializeAs__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SettingsSerializeAs__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SettingsSerializeAs__Enum__Class* get_class() {
            return il2cpp::get_class<app::SettingsSerializeAs__Enum__Class>(type_info(), "System.Configuration", "SettingsSerializeAs");
        }
        inline app::SettingsSerializeAs__Enum* create() {
            return il2cpp::create_object<app::SettingsSerializeAs__Enum>(get_class());
        }
    } // namespace SettingsSerializeAs__Enum
} // namespace app::classes::types

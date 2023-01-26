#pragma once
#include <Modloader/app/structs/SettingsBase.h>
#include <Modloader/app/structs/SettingsBase__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SettingsBase {
        inline app::SettingsBase__Class** type_info() {
            static app::SettingsBase__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SettingsBase__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SettingsBase__Class* get_class() {
            return il2cpp::get_class<app::SettingsBase__Class>(type_info(), "System.Configuration", "SettingsBase");
        }
        inline app::SettingsBase* create() {
            return il2cpp::create_object<app::SettingsBase>(get_class());
        }
    } // namespace SettingsBase
} // namespace app::classes::types

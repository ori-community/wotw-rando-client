#pragma once
#include <Modloader/app/structs/SettingsSavingEventHandler.h>
#include <Modloader/app/structs/SettingsSavingEventHandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SettingsSavingEventHandler {
        inline app::SettingsSavingEventHandler__Class** type_info() {
            static app::SettingsSavingEventHandler__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SettingsSavingEventHandler__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SettingsSavingEventHandler__Class* get_class() {
            return il2cpp::get_class<app::SettingsSavingEventHandler__Class>(type_info(), "System.Configuration", "SettingsSavingEventHandler");
        }
        inline app::SettingsSavingEventHandler* create() {
            return il2cpp::create_object<app::SettingsSavingEventHandler>(get_class());
        }
    } // namespace SettingsSavingEventHandler
} // namespace app::classes::types

#pragma once
#include <Modloader/app/structs/SettingChangingEventHandler.h>
#include <Modloader/app/structs/SettingChangingEventHandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SettingChangingEventHandler {
        inline app::SettingChangingEventHandler__Class** type_info() {
            static app::SettingChangingEventHandler__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SettingChangingEventHandler__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SettingChangingEventHandler__Class* get_class() {
            return il2cpp::get_class<app::SettingChangingEventHandler__Class>(type_info(), "System.Configuration", "SettingChangingEventHandler");
        }
        inline app::SettingChangingEventHandler* create() {
            return il2cpp::create_object<app::SettingChangingEventHandler>(get_class());
        }
    } // namespace SettingChangingEventHandler
} // namespace app::classes::types

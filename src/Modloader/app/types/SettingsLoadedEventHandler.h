#pragma once
#include <Modloader/app/structs/SettingsLoadedEventHandler.h>
#include <Modloader/app/structs/SettingsLoadedEventHandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SettingsLoadedEventHandler {
        inline app::SettingsLoadedEventHandler__Class** type_info() {
            static app::SettingsLoadedEventHandler__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SettingsLoadedEventHandler__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SettingsLoadedEventHandler__Class* get_class() {
            return il2cpp::get_class<app::SettingsLoadedEventHandler__Class>(type_info(), "System.Configuration", "SettingsLoadedEventHandler");
        }
        inline app::SettingsLoadedEventHandler* create() {
            return il2cpp::create_object<app::SettingsLoadedEventHandler>(get_class());
        }
    } // namespace SettingsLoadedEventHandler
} // namespace app::classes::types

#pragma once
#include <Modloader/app/structs/SettingsLoadedEventArgs.h>
#include <Modloader/app/structs/SettingsLoadedEventArgs__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SettingsLoadedEventArgs {
        inline app::SettingsLoadedEventArgs__Class** type_info() {
            static app::SettingsLoadedEventArgs__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SettingsLoadedEventArgs__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SettingsLoadedEventArgs__Class* get_class() {
            return il2cpp::get_class<app::SettingsLoadedEventArgs__Class>(type_info(), "System.Configuration", "SettingsLoadedEventArgs");
        }
        inline app::SettingsLoadedEventArgs* create() {
            return il2cpp::create_object<app::SettingsLoadedEventArgs>(get_class());
        }
    } // namespace SettingsLoadedEventArgs
} // namespace app::classes::types

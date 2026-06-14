#pragma once
#include <Modloader/app/structs/SettingChangingEventArgs.h>
#include <Modloader/app/structs/SettingChangingEventArgs__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SettingChangingEventArgs {
        inline app::SettingChangingEventArgs__Class** type_info() {
            static app::SettingChangingEventArgs__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SettingChangingEventArgs__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SettingChangingEventArgs__Class* get_class() {
            return il2cpp::get_class<app::SettingChangingEventArgs__Class>(type_info(), "System.Configuration", "SettingChangingEventArgs");
        }
        inline app::SettingChangingEventArgs* create() {
            return il2cpp::create_object<app::SettingChangingEventArgs>(get_class());
        }
    } // namespace SettingChangingEventArgs
} // namespace app::classes::types

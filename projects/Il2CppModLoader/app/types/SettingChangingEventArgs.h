#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SettingChangingEventArgs {
        namespace {
            app::SettingChangingEventArgs__Class* type_info_ref = nullptr;
        }
        app::SettingChangingEventArgs__Class** type_info = &type_info_ref;
        inline app::SettingChangingEventArgs__Class* get_class() {
            return il2cpp::get_class<app::SettingChangingEventArgs__Class>(type_info, "System.Configuration", "SettingChangingEventArgs");
        }
        inline app::SettingChangingEventArgs* create() {
            return il2cpp::create_object<app::SettingChangingEventArgs>(get_class());
        }
    } // namespace SettingChangingEventArgs
} // namespace app::classes::types

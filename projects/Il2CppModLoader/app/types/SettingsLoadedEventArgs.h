#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SettingsLoadedEventArgs {
        namespace {
            app::SettingsLoadedEventArgs__Class* type_info_ref = nullptr;
        }
        app::SettingsLoadedEventArgs__Class** type_info = &type_info_ref;
        inline app::SettingsLoadedEventArgs__Class* get_class() {
            return il2cpp::get_class<app::SettingsLoadedEventArgs__Class>(type_info, "System.Configuration", "SettingsLoadedEventArgs");
        }
        inline app::SettingsLoadedEventArgs* create() {
            return il2cpp::create_object<app::SettingsLoadedEventArgs>(get_class());
        }
    } // namespace SettingsLoadedEventArgs
} // namespace app::classes::types

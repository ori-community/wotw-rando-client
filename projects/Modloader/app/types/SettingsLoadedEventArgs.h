#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SettingsLoadedEventArgs {
        namespace {
            inline app::SettingsLoadedEventArgs__Class* type_info_ref = nullptr;
        }
        inline app::SettingsLoadedEventArgs__Class** type_info = &type_info_ref;
        inline app::SettingsLoadedEventArgs__Class* get_class() {
            return il2cpp::get_class<app::SettingsLoadedEventArgs__Class>(type_info, "System.Configuration", "SettingsLoadedEventArgs");
        }
        inline app::SettingsLoadedEventArgs* create() {
            return il2cpp::create_object<app::SettingsLoadedEventArgs>(get_class());
        }
    } // namespace SettingsLoadedEventArgs
} // namespace app::classes::types

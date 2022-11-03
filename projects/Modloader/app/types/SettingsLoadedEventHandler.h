#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SettingsLoadedEventHandler {
        namespace {
            inline app::SettingsLoadedEventHandler__Class* type_info_ref = nullptr;
        }
        inline app::SettingsLoadedEventHandler__Class** type_info = &type_info_ref;
        inline app::SettingsLoadedEventHandler__Class* get_class() {
            return il2cpp::get_class<app::SettingsLoadedEventHandler__Class>(type_info, "System.Configuration", "SettingsLoadedEventHandler");
        }
        inline app::SettingsLoadedEventHandler* create() {
            return il2cpp::create_object<app::SettingsLoadedEventHandler>(get_class());
        }
    } // namespace SettingsLoadedEventHandler
} // namespace app::classes::types

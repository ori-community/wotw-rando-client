#pragma once
#include <Modloader/app/structs/SettingsScreen.h>
#include <Modloader/app/structs/SettingsScreen__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SettingsScreen {
        inline app::SettingsScreen__Class** type_info() {
            static app::SettingsScreen__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SettingsScreen__Class**)(modloader::win::memory::resolve_rva(0x04729920));
            }
            return cache;
        }
        inline app::SettingsScreen__Class* get_class() {
            return il2cpp::get_class<app::SettingsScreen__Class>(type_info(), "", "SettingsScreen");
        }
        inline app::SettingsScreen* create() {
            return il2cpp::create_object<app::SettingsScreen>(get_class());
        }
    } // namespace SettingsScreen
} // namespace app::classes::types

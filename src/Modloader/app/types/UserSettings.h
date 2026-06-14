#pragma once
#include <Modloader/app/structs/UserSettings.h>
#include <Modloader/app/structs/UserSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UserSettings {
        inline app::UserSettings__Class** type_info() {
            static app::UserSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UserSettings__Class**)(modloader::win::memory::resolve_rva(0x047793C0));
            }
            return cache;
        }
        inline app::UserSettings__Class* get_class() {
            return il2cpp::get_class<app::UserSettings__Class>(type_info(), "PlayFab.ClientModels", "UserSettings");
        }
        inline app::UserSettings* create() {
            return il2cpp::create_object<app::UserSettings>(get_class());
        }
    } // namespace UserSettings
} // namespace app::classes::types

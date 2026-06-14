#pragma once
#include <Modloader/app/structs/PlayFabSettings.h>
#include <Modloader/app/structs/PlayFabSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayFabSettings {
        inline app::PlayFabSettings__Class** type_info() {
            static app::PlayFabSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PlayFabSettings__Class**)(modloader::win::memory::resolve_rva(0x04715CF0));
            }
            return cache;
        }
        inline app::PlayFabSettings__Class* get_class() {
            return il2cpp::get_class<app::PlayFabSettings__Class>(type_info(), "PlayFab", "PlayFabSettings");
        }
        inline app::PlayFabSettings* create() {
            return il2cpp::create_object<app::PlayFabSettings>(get_class());
        }
    } // namespace PlayFabSettings
} // namespace app::classes::types

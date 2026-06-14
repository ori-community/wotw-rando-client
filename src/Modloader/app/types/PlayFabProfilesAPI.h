#pragma once
#include <Modloader/app/structs/PlayFabProfilesAPI.h>
#include <Modloader/app/structs/PlayFabProfilesAPI__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayFabProfilesAPI {
        inline app::PlayFabProfilesAPI__Class** type_info() {
            static app::PlayFabProfilesAPI__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PlayFabProfilesAPI__Class**)(modloader::win::memory::resolve_rva(0x0476A4A0));
            }
            return cache;
        }
        inline app::PlayFabProfilesAPI__Class* get_class() {
            return il2cpp::get_class<app::PlayFabProfilesAPI__Class>(type_info(), "PlayFab", "PlayFabProfilesAPI");
        }
        inline app::PlayFabProfilesAPI* create() {
            return il2cpp::create_object<app::PlayFabProfilesAPI>(get_class());
        }
    } // namespace PlayFabProfilesAPI
} // namespace app::classes::types

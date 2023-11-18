#pragma once
#include <Modloader/app/structs/PlayFabMultiplayerInstanceAPI.h>
#include <Modloader/app/structs/PlayFabMultiplayerInstanceAPI__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayFabMultiplayerInstanceAPI {
        inline app::PlayFabMultiplayerInstanceAPI__Class** type_info() {
            static app::PlayFabMultiplayerInstanceAPI__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayFabMultiplayerInstanceAPI__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayFabMultiplayerInstanceAPI__Class* get_class() {
            return il2cpp::get_class<app::PlayFabMultiplayerInstanceAPI__Class>(type_info(), "PlayFab", "PlayFabMultiplayerInstanceAPI");
        }
        inline app::PlayFabMultiplayerInstanceAPI* create() {
            return il2cpp::create_object<app::PlayFabMultiplayerInstanceAPI>(get_class());
        }
    } // namespace PlayFabMultiplayerInstanceAPI
} // namespace app::classes::types

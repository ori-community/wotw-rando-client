#pragma once
#include <Modloader/app/structs/PlayFabClientAPI.h>
#include <Modloader/app/structs/PlayFabClientAPI__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayFabClientAPI {
        inline app::PlayFabClientAPI__Class** type_info() {
            static app::PlayFabClientAPI__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PlayFabClientAPI__Class**)(modloader::win::memory::resolve_rva(0x04791658));
            }
            return cache;
        }
        inline app::PlayFabClientAPI__Class* get_class() {
            return il2cpp::get_class<app::PlayFabClientAPI__Class>(type_info(), "PlayFab", "PlayFabClientAPI");
        }
        inline app::PlayFabClientAPI* create() {
            return il2cpp::create_object<app::PlayFabClientAPI>(get_class());
        }
    } // namespace PlayFabClientAPI
} // namespace app::classes::types

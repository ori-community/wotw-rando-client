#pragma once
#include <Modloader/app/structs/PlayFabWebRequest.h>
#include <Modloader/app/structs/PlayFabWebRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayFabWebRequest {
        inline app::PlayFabWebRequest__Class** type_info() {
            static app::PlayFabWebRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PlayFabWebRequest__Class**)(modloader::win::memory::resolve_rva(0x047652B8));
            }
            return cache;
        }
        inline app::PlayFabWebRequest__Class* get_class() {
            return il2cpp::get_class<app::PlayFabWebRequest__Class>(type_info(), "PlayFab.Internal", "PlayFabWebRequest");
        }
        inline app::PlayFabWebRequest* create() {
            return il2cpp::create_object<app::PlayFabWebRequest>(get_class());
        }
    } // namespace PlayFabWebRequest
} // namespace app::classes::types

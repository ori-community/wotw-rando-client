#pragma once
#include <Modloader/app/structs/PlayFabEventsAPI.h>
#include <Modloader/app/structs/PlayFabEventsAPI__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayFabEventsAPI {
        inline app::PlayFabEventsAPI__Class** type_info() {
            static app::PlayFabEventsAPI__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PlayFabEventsAPI__Class**)(modloader::win::memory::resolve_rva(0x0475CA38));
            }
            return cache;
        }
        inline app::PlayFabEventsAPI__Class* get_class() {
            return il2cpp::get_class<app::PlayFabEventsAPI__Class>(type_info(), "PlayFab", "PlayFabEventsAPI");
        }
        inline app::PlayFabEventsAPI* create() {
            return il2cpp::create_object<app::PlayFabEventsAPI>(get_class());
        }
    } // namespace PlayFabEventsAPI
} // namespace app::classes::types

#pragma once
#include <Modloader/app/structs/PlayFabDataAPI.h>
#include <Modloader/app/structs/PlayFabDataAPI__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayFabDataAPI {
        inline app::PlayFabDataAPI__Class** type_info() {
            static app::PlayFabDataAPI__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PlayFabDataAPI__Class**)(modloader::win::memory::resolve_rva(0x0474C7E8));
            }
            return cache;
        }
        inline app::PlayFabDataAPI__Class* get_class() {
            return il2cpp::get_class<app::PlayFabDataAPI__Class>(type_info(), "PlayFab", "PlayFabDataAPI");
        }
        inline app::PlayFabDataAPI* create() {
            return il2cpp::create_object<app::PlayFabDataAPI>(get_class());
        }
    } // namespace PlayFabDataAPI
} // namespace app::classes::types

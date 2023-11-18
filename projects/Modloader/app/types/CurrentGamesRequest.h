#pragma once
#include <Modloader/app/structs/CurrentGamesRequest.h>
#include <Modloader/app/structs/CurrentGamesRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CurrentGamesRequest {
        inline app::CurrentGamesRequest__Class** type_info() {
            static app::CurrentGamesRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CurrentGamesRequest__Class**)(modloader::win::memory::resolve_rva(0x04786CF0));
            }
            return cache;
        }
        inline app::CurrentGamesRequest__Class* get_class() {
            return il2cpp::get_class<app::CurrentGamesRequest__Class>(type_info(), "PlayFab.ClientModels", "CurrentGamesRequest");
        }
        inline app::CurrentGamesRequest* create() {
            return il2cpp::create_object<app::CurrentGamesRequest>(get_class());
        }
    } // namespace CurrentGamesRequest
} // namespace app::classes::types

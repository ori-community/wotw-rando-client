#pragma once
#include <Modloader/app/structs/MatchmakeRequest.h>
#include <Modloader/app/structs/MatchmakeRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MatchmakeRequest {
        inline app::MatchmakeRequest__Class** type_info() {
            static app::MatchmakeRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MatchmakeRequest__Class**)(modloader::win::memory::resolve_rva(0x04788AB8));
            }
            return cache;
        }
        inline app::MatchmakeRequest__Class* get_class() {
            return il2cpp::get_class<app::MatchmakeRequest__Class>(type_info(), "PlayFab.ClientModels", "MatchmakeRequest");
        }
        inline app::MatchmakeRequest* create() {
            return il2cpp::create_object<app::MatchmakeRequest>(get_class());
        }
    } // namespace MatchmakeRequest
} // namespace app::classes::types

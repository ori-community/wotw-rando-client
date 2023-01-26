#pragma once
#include <Modloader/app/structs/GetMatchRequest.h>
#include <Modloader/app/structs/GetMatchRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetMatchRequest {
        inline app::GetMatchRequest__Class** type_info() {
            static app::GetMatchRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetMatchRequest__Class**)(modloader::win::memory::resolve_rva(0x04739BC0));
            }
            return cache;
        }
        inline app::GetMatchRequest__Class* get_class() {
            return il2cpp::get_class<app::GetMatchRequest__Class>(type_info(), "PlayFab.MultiplayerModels", "GetMatchRequest");
        }
        inline app::GetMatchRequest* create() {
            return il2cpp::create_object<app::GetMatchRequest>(get_class());
        }
    } // namespace GetMatchRequest
} // namespace app::classes::types

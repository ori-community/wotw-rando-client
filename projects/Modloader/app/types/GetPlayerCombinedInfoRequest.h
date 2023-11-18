#pragma once
#include <Modloader/app/structs/GetPlayerCombinedInfoRequest.h>
#include <Modloader/app/structs/GetPlayerCombinedInfoRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetPlayerCombinedInfoRequest {
        inline app::GetPlayerCombinedInfoRequest__Class** type_info() {
            static app::GetPlayerCombinedInfoRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetPlayerCombinedInfoRequest__Class**)(modloader::win::memory::resolve_rva(0x0475CB08));
            }
            return cache;
        }
        inline app::GetPlayerCombinedInfoRequest__Class* get_class() {
            return il2cpp::get_class<app::GetPlayerCombinedInfoRequest__Class>(type_info(), "PlayFab.ClientModels", "GetPlayerCombinedInfoRequest");
        }
        inline app::GetPlayerCombinedInfoRequest* create() {
            return il2cpp::create_object<app::GetPlayerCombinedInfoRequest>(get_class());
        }
    } // namespace GetPlayerCombinedInfoRequest
} // namespace app::classes::types

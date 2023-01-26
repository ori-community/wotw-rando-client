#pragma once
#include <Modloader/app/structs/GameServerRegionsRequest.h>
#include <Modloader/app/structs/GameServerRegionsRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GameServerRegionsRequest {
        inline app::GameServerRegionsRequest__Class** type_info() {
            static app::GameServerRegionsRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GameServerRegionsRequest__Class**)(modloader::win::memory::resolve_rva(0x04770768));
            }
            return cache;
        }
        inline app::GameServerRegionsRequest__Class* get_class() {
            return il2cpp::get_class<app::GameServerRegionsRequest__Class>(type_info(), "PlayFab.ClientModels", "GameServerRegionsRequest");
        }
        inline app::GameServerRegionsRequest* create() {
            return il2cpp::create_object<app::GameServerRegionsRequest>(get_class());
        }
    } // namespace GameServerRegionsRequest
} // namespace app::classes::types

#pragma once
#include <Modloader/app/structs/EntityTokenResponse.h>
#include <Modloader/app/structs/EntityTokenResponse__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EntityTokenResponse {
        inline app::EntityTokenResponse__Class** type_info() {
            static app::EntityTokenResponse__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EntityTokenResponse__Class**)(modloader::win::memory::resolve_rva(0x04793568));
            }
            return cache;
        }
        inline app::EntityTokenResponse__Class* get_class() {
            return il2cpp::get_class<app::EntityTokenResponse__Class>(type_info(), "PlayFab.ClientModels", "EntityTokenResponse");
        }
        inline app::EntityTokenResponse* create() {
            return il2cpp::create_object<app::EntityTokenResponse>(get_class());
        }
    } // namespace EntityTokenResponse
} // namespace app::classes::types

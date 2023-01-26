#pragma once
#include <Modloader/app/structs/GetEntityTokenResponse.h>
#include <Modloader/app/structs/GetEntityTokenResponse__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetEntityTokenResponse {
        inline app::GetEntityTokenResponse__Class** type_info() {
            static app::GetEntityTokenResponse__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetEntityTokenResponse__Class**)(modloader::win::memory::resolve_rva(0x0473B800));
            }
            return cache;
        }
        inline app::GetEntityTokenResponse__Class* get_class() {
            return il2cpp::get_class<app::GetEntityTokenResponse__Class>(type_info(), "PlayFab.AuthenticationModels", "GetEntityTokenResponse");
        }
        inline app::GetEntityTokenResponse* create() {
            return il2cpp::create_object<app::GetEntityTokenResponse>(get_class());
        }
    } // namespace GetEntityTokenResponse
} // namespace app::classes::types

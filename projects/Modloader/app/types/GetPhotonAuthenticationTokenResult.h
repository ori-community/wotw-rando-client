#pragma once
#include <Modloader/app/structs/GetPhotonAuthenticationTokenResult.h>
#include <Modloader/app/structs/GetPhotonAuthenticationTokenResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetPhotonAuthenticationTokenResult {
        inline app::GetPhotonAuthenticationTokenResult__Class** type_info() {
            static app::GetPhotonAuthenticationTokenResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetPhotonAuthenticationTokenResult__Class**)(modloader::win::memory::resolve_rva(0x047085D0));
            }
            return cache;
        }
        inline app::GetPhotonAuthenticationTokenResult__Class* get_class() {
            return il2cpp::get_class<app::GetPhotonAuthenticationTokenResult__Class>(type_info(), "PlayFab.ClientModels", "GetPhotonAuthenticationTokenResult");
        }
        inline app::GetPhotonAuthenticationTokenResult* create() {
            return il2cpp::create_object<app::GetPhotonAuthenticationTokenResult>(get_class());
        }
    } // namespace GetPhotonAuthenticationTokenResult
} // namespace app::classes::types

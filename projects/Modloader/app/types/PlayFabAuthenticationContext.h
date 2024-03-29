#pragma once
#include <Modloader/app/structs/PlayFabAuthenticationContext.h>
#include <Modloader/app/structs/PlayFabAuthenticationContext__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayFabAuthenticationContext {
        inline app::PlayFabAuthenticationContext__Class** type_info() {
            static app::PlayFabAuthenticationContext__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PlayFabAuthenticationContext__Class**)(modloader::win::memory::resolve_rva(0x04703CB8));
            }
            return cache;
        }
        inline app::PlayFabAuthenticationContext__Class* get_class() {
            return il2cpp::get_class<app::PlayFabAuthenticationContext__Class>(type_info(), "PlayFab", "PlayFabAuthenticationContext");
        }
        inline app::PlayFabAuthenticationContext* create() {
            return il2cpp::create_object<app::PlayFabAuthenticationContext>(get_class());
        }
    } // namespace PlayFabAuthenticationContext
} // namespace app::classes::types

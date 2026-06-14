#pragma once
#include <Modloader/app/structs/PlayFabSignInProvider.h>
#include <Modloader/app/structs/PlayFabSignInProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayFabSignInProvider {
        inline app::PlayFabSignInProvider__Class** type_info() {
            static app::PlayFabSignInProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PlayFabSignInProvider__Class**)(modloader::win::memory::resolve_rva(0x0475C6B8));
            }
            return cache;
        }
        inline app::PlayFabSignInProvider__Class* get_class() {
            return il2cpp::get_class<app::PlayFabSignInProvider__Class>(type_info(), "SystemIntegration", "PlayFabSignInProvider");
        }
        inline app::PlayFabSignInProvider* create() {
            return il2cpp::create_object<app::PlayFabSignInProvider>(get_class());
        }
    } // namespace PlayFabSignInProvider
} // namespace app::classes::types

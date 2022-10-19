#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayFabSignInProvider {
        inline app::PlayFabSignInProvider__Class** type_info = (app::PlayFabSignInProvider__Class**)(modloader::win::memory::resolve_rva(0x0475C6B8));
        inline app::PlayFabSignInProvider__Class* get_class() {
            return il2cpp::get_class<app::PlayFabSignInProvider__Class>(type_info, "SystemIntegration", "PlayFabSignInProvider");
        }
        inline app::PlayFabSignInProvider* create() {
            return il2cpp::create_object<app::PlayFabSignInProvider>(get_class());
        }
    } // namespace PlayFabSignInProvider
} // namespace app::classes::types

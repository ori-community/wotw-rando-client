#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayFabAuthenticationContext {
        inline app::PlayFabAuthenticationContext__Class** type_info = (app::PlayFabAuthenticationContext__Class**)(modloader::win::memory::resolve_rva(0x04703CB8));
        inline app::PlayFabAuthenticationContext__Class* get_class() {
            return il2cpp::get_class<app::PlayFabAuthenticationContext__Class>(type_info, "PlayFab", "PlayFabAuthenticationContext");
        }
        inline app::PlayFabAuthenticationContext* create() {
            return il2cpp::create_object<app::PlayFabAuthenticationContext>(get_class());
        }
    } // namespace PlayFabAuthenticationContext
} // namespace app::classes::types

#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LoginResult {
        inline app::LoginResult__Class** type_info = (app::LoginResult__Class**)(modloader::win::memory::resolve_rva(0x0472B560));
        inline app::LoginResult__Class* get_class() {
            return il2cpp::get_class<app::LoginResult__Class>(type_info, "PlayFab.ClientModels", "LoginResult");
        }
        inline app::LoginResult* create() {
            return il2cpp::create_object<app::LoginResult>(get_class());
        }
    } // namespace LoginResult
} // namespace app::classes::types

#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LoginIdentityProvider__Enum {
        inline app::LoginIdentityProvider__Enum__Class** type_info = (app::LoginIdentityProvider__Enum__Class**)(modloader::win::memory::resolve_rva(0x04730548));
        inline app::LoginIdentityProvider__Enum__Class* get_class() {
            return il2cpp::get_class<app::LoginIdentityProvider__Enum__Class>(type_info, "PlayFab.ClientModels", "LoginIdentityProvider");
        }
        inline app::LoginIdentityProvider__Enum* create() {
            return il2cpp::create_object<app::LoginIdentityProvider__Enum>(get_class());
        }
    } // namespace LoginIdentityProvider__Enum
} // namespace app::classes::types

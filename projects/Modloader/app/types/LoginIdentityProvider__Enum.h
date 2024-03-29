#pragma once
#include <Modloader/app/structs/LoginIdentityProvider__Enum.h>
#include <Modloader/app/structs/LoginIdentityProvider__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LoginIdentityProvider__Enum {
        inline app::LoginIdentityProvider__Enum__Class** type_info() {
            static app::LoginIdentityProvider__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LoginIdentityProvider__Enum__Class**)(modloader::win::memory::resolve_rva(0x04730548));
            }
            return cache;
        }
        inline app::LoginIdentityProvider__Enum__Class* get_class() {
            return il2cpp::get_class<app::LoginIdentityProvider__Enum__Class>(type_info(), "PlayFab.ClientModels", "LoginIdentityProvider");
        }
        inline app::LoginIdentityProvider__Enum* create() {
            return il2cpp::create_object<app::LoginIdentityProvider__Enum>(get_class());
        }
    } // namespace LoginIdentityProvider__Enum
} // namespace app::classes::types

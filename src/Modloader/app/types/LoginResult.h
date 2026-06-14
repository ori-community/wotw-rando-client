#pragma once
#include <Modloader/app/structs/LoginResult.h>
#include <Modloader/app/structs/LoginResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LoginResult {
        inline app::LoginResult__Class** type_info() {
            static app::LoginResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LoginResult__Class**)(modloader::win::memory::resolve_rva(0x0472B560));
            }
            return cache;
        }
        inline app::LoginResult__Class* get_class() {
            return il2cpp::get_class<app::LoginResult__Class>(type_info(), "PlayFab.ClientModels", "LoginResult");
        }
        inline app::LoginResult* create() {
            return il2cpp::create_object<app::LoginResult>(get_class());
        }
    } // namespace LoginResult
} // namespace app::classes::types

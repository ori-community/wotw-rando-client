#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RevokeAllBansForUserResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RevokeAllBansForUserResult__Class** type_info;
        inline app::RevokeAllBansForUserResult__Class* get_class() {
            return il2cpp::get_class<app::RevokeAllBansForUserResult__Class>(type_info, "PlayFab.ServerModels", "RevokeAllBansForUserResult");
        }
        inline app::RevokeAllBansForUserResult* create() {
            return il2cpp::create_object<app::RevokeAllBansForUserResult>(get_class());
        }
    } // namespace RevokeAllBansForUserResult
} // namespace app::classes::types

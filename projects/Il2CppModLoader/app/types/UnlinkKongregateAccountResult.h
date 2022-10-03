#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UnlinkKongregateAccountResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UnlinkKongregateAccountResult__Class** type_info;
        inline app::UnlinkKongregateAccountResult__Class* get_class() {
            return il2cpp::get_class<app::UnlinkKongregateAccountResult__Class>(type_info, "PlayFab.ClientModels", "UnlinkKongregateAccountResult");
        }
        inline app::UnlinkKongregateAccountResult* create() {
            return il2cpp::create_object<app::UnlinkKongregateAccountResult>(get_class());
        }
    } // namespace UnlinkKongregateAccountResult
} // namespace app::classes::types

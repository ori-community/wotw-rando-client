#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UnlinkXboxAccountResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UnlinkXboxAccountResult__Class** type_info;
        inline app::UnlinkXboxAccountResult__Class* get_class() {
            return il2cpp::get_class<app::UnlinkXboxAccountResult__Class>(type_info, "PlayFab.ClientModels", "UnlinkXboxAccountResult");
        }
        inline app::UnlinkXboxAccountResult* create() {
            return il2cpp::create_object<app::UnlinkXboxAccountResult>(get_class());
        }
    } // namespace UnlinkXboxAccountResult
} // namespace app::classes::types

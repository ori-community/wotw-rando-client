#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LinkXboxAccountResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LinkXboxAccountResult__Class** type_info;
        inline app::LinkXboxAccountResult__Class* get_class() {
            return il2cpp::get_class<app::LinkXboxAccountResult__Class>(type_info, "PlayFab.ClientModels", "LinkXboxAccountResult");
        }
        inline app::LinkXboxAccountResult* create() {
            return il2cpp::create_object<app::LinkXboxAccountResult>(get_class());
        }
    } // namespace LinkXboxAccountResult
} // namespace app::classes::types

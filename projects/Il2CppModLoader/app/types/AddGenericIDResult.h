#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AddGenericIDResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AddGenericIDResult__Class** type_info;
        inline app::AddGenericIDResult__Class* get_class() {
            return il2cpp::get_class<app::AddGenericIDResult__Class>(type_info, "PlayFab.ClientModels", "AddGenericIDResult");
        }
        inline app::AddGenericIDResult* create() {
            return il2cpp::create_object<app::AddGenericIDResult>(get_class());
        }
    } // namespace AddGenericIDResult
} // namespace app::classes::types

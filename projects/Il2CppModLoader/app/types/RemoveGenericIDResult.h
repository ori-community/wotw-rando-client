#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RemoveGenericIDResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RemoveGenericIDResult__Class** type_info;
        inline app::RemoveGenericIDResult__Class* get_class() {
            return il2cpp::get_class<app::RemoveGenericIDResult__Class>(type_info, "PlayFab.ClientModels", "RemoveGenericIDResult");
        }
        inline app::RemoveGenericIDResult* create() {
            return il2cpp::create_object<app::RemoveGenericIDResult>(get_class());
        }
    } // namespace RemoveGenericIDResult
} // namespace app::classes::types

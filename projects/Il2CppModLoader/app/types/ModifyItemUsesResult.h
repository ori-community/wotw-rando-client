#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ModifyItemUsesResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ModifyItemUsesResult__Class** type_info;
        inline app::ModifyItemUsesResult__Class* get_class() {
            return il2cpp::get_class<app::ModifyItemUsesResult__Class>(type_info, "PlayFab.ServerModels", "ModifyItemUsesResult");
        }
        inline app::ModifyItemUsesResult* create() {
            return il2cpp::create_object<app::ModifyItemUsesResult>(get_class());
        }
    } // namespace ModifyItemUsesResult
} // namespace app::classes::types

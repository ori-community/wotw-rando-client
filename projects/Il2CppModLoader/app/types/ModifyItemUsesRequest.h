#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ModifyItemUsesRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ModifyItemUsesRequest__Class** type_info;
        inline app::ModifyItemUsesRequest__Class* get_class() {
            return il2cpp::get_class<app::ModifyItemUsesRequest__Class>(type_info, "PlayFab.ServerModels", "ModifyItemUsesRequest");
        }
        inline app::ModifyItemUsesRequest* create() {
            return il2cpp::create_object<app::ModifyItemUsesRequest>(get_class());
        }
    } // namespace ModifyItemUsesRequest
} // namespace app::classes::types

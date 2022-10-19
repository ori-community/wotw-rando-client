#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ModifyItemUsesRequest {
        inline app::ModifyItemUsesRequest__Class** type_info = (app::ModifyItemUsesRequest__Class**)(modloader::win::memory::resolve_rva(0x0475F1F8));
        inline app::ModifyItemUsesRequest__Class* get_class() {
            return il2cpp::get_class<app::ModifyItemUsesRequest__Class>(type_info, "PlayFab.ServerModels", "ModifyItemUsesRequest");
        }
        inline app::ModifyItemUsesRequest* create() {
            return il2cpp::create_object<app::ModifyItemUsesRequest>(get_class());
        }
    } // namespace ModifyItemUsesRequest
} // namespace app::classes::types

#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UpdateBansRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UpdateBansRequest__Class** type_info;
        inline app::UpdateBansRequest__Class* get_class() {
            return il2cpp::get_class<app::UpdateBansRequest__Class>(type_info, "PlayFab.ServerModels", "UpdateBansRequest");
        }
        inline app::UpdateBansRequest* create() {
            return il2cpp::create_object<app::UpdateBansRequest>(get_class());
        }
    } // namespace UpdateBansRequest
} // namespace app::classes::types

#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RevokeBansRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RevokeBansRequest__Class** type_info;
        inline app::RevokeBansRequest__Class* get_class() {
            return il2cpp::get_class<app::RevokeBansRequest__Class>(type_info, "PlayFab.ServerModels", "RevokeBansRequest");
        }
        inline app::RevokeBansRequest* create() {
            return il2cpp::create_object<app::RevokeBansRequest>(get_class());
        }
    } // namespace RevokeBansRequest
} // namespace app::classes::types

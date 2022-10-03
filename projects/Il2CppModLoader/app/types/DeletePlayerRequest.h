#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DeletePlayerRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DeletePlayerRequest__Class** type_info;
        inline app::DeletePlayerRequest__Class* get_class() {
            return il2cpp::get_class<app::DeletePlayerRequest__Class>(type_info, "PlayFab.ServerModels", "DeletePlayerRequest");
        }
        inline app::DeletePlayerRequest* create() {
            return il2cpp::create_object<app::DeletePlayerRequest>(get_class());
        }
    } // namespace DeletePlayerRequest
} // namespace app::classes::types

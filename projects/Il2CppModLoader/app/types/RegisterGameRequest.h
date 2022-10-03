#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RegisterGameRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RegisterGameRequest__Class** type_info;
        inline app::RegisterGameRequest__Class* get_class() {
            return il2cpp::get_class<app::RegisterGameRequest__Class>(type_info, "PlayFab.ServerModels", "RegisterGameRequest");
        }
        inline app::RegisterGameRequest* create() {
            return il2cpp::create_object<app::RegisterGameRequest>(get_class());
        }
    } // namespace RegisterGameRequest
} // namespace app::classes::types

#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RegisterGameResponse {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RegisterGameResponse__Class** type_info;
        inline app::RegisterGameResponse__Class* get_class() {
            return il2cpp::get_class<app::RegisterGameResponse__Class>(type_info, "PlayFab.ServerModels", "RegisterGameResponse");
        }
        inline app::RegisterGameResponse* create() {
            return il2cpp::create_object<app::RegisterGameResponse>(get_class());
        }
    } // namespace RegisterGameResponse
} // namespace app::classes::types

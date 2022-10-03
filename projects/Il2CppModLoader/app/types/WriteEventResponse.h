#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WriteEventResponse {
        extern IL2CPP_MODLOADER_DLLEXPORT app::WriteEventResponse__Class** type_info;
        inline app::WriteEventResponse__Class* get_class() {
            return il2cpp::get_class<app::WriteEventResponse__Class>(type_info, "PlayFab.ClientModels", "WriteEventResponse");
        }
        inline app::WriteEventResponse* create() {
            return il2cpp::create_object<app::WriteEventResponse>(get_class());
        }
    } // namespace WriteEventResponse
} // namespace app::classes::types

#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayFabEmitEventResponse {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PlayFabEmitEventResponse__Class** type_info;
        inline app::PlayFabEmitEventResponse__Class* get_class() {
            return il2cpp::get_class<app::PlayFabEmitEventResponse__Class>(type_info, "PlayFab", "PlayFabEmitEventResponse");
        }
        inline app::PlayFabEmitEventResponse* create() {
            return il2cpp::create_object<app::PlayFabEmitEventResponse>(get_class());
        }
    } // namespace PlayFabEmitEventResponse
} // namespace app::classes::types

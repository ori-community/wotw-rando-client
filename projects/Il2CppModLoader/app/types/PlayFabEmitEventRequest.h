#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayFabEmitEventRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PlayFabEmitEventRequest__Class** type_info;
        inline app::PlayFabEmitEventRequest__Class* get_class() {
            return il2cpp::get_class<app::PlayFabEmitEventRequest__Class>(type_info, "PlayFab", "PlayFabEmitEventRequest");
        }
        inline app::PlayFabEmitEventRequest* create() {
            return il2cpp::create_object<app::PlayFabEmitEventRequest>(get_class());
        }
    } // namespace PlayFabEmitEventRequest
} // namespace app::classes::types

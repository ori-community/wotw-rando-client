#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WriteClientPlayerEventRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::WriteClientPlayerEventRequest__Class** type_info;
        inline app::WriteClientPlayerEventRequest__Class* get_class() {
            return il2cpp::get_class<app::WriteClientPlayerEventRequest__Class>(type_info, "PlayFab.ClientModels", "WriteClientPlayerEventRequest");
        }
        inline app::WriteClientPlayerEventRequest* create() {
            return il2cpp::create_object<app::WriteClientPlayerEventRequest>(get_class());
        }
    } // namespace WriteClientPlayerEventRequest
} // namespace app::classes::types

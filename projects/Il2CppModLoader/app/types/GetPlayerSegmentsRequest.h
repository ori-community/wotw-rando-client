#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetPlayerSegmentsRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetPlayerSegmentsRequest__Class** type_info;
        inline app::GetPlayerSegmentsRequest__Class* get_class() {
            return il2cpp::get_class<app::GetPlayerSegmentsRequest__Class>(type_info, "PlayFab.ClientModels", "GetPlayerSegmentsRequest");
        }
        inline app::GetPlayerSegmentsRequest* create() {
            return il2cpp::create_object<app::GetPlayerSegmentsRequest>(get_class());
        }
    } // namespace GetPlayerSegmentsRequest
} // namespace app::classes::types

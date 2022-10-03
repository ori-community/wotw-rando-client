#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetAllSegmentsRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetAllSegmentsRequest__Class** type_info;
        inline app::GetAllSegmentsRequest__Class* get_class() {
            return il2cpp::get_class<app::GetAllSegmentsRequest__Class>(type_info, "PlayFab.ServerModels", "GetAllSegmentsRequest");
        }
        inline app::GetAllSegmentsRequest* create() {
            return il2cpp::create_object<app::GetAllSegmentsRequest>(get_class());
        }
    } // namespace GetAllSegmentsRequest
} // namespace app::classes::types

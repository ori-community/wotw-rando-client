#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetPublisherDataRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetPublisherDataRequest__Class** type_info;
        inline app::GetPublisherDataRequest__Class* get_class() {
            return il2cpp::get_class<app::GetPublisherDataRequest__Class>(type_info, "PlayFab.ClientModels", "GetPublisherDataRequest");
        }
        inline app::GetPublisherDataRequest* create() {
            return il2cpp::create_object<app::GetPublisherDataRequest>(get_class());
        }
    } // namespace GetPublisherDataRequest
} // namespace app::classes::types

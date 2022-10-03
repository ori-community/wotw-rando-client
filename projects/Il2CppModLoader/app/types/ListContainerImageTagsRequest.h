#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ListContainerImageTagsRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ListContainerImageTagsRequest__Class** type_info;
        inline app::ListContainerImageTagsRequest__Class* get_class() {
            return il2cpp::get_class<app::ListContainerImageTagsRequest__Class>(type_info, "PlayFab.MultiplayerModels", "ListContainerImageTagsRequest");
        }
        inline app::ListContainerImageTagsRequest* create() {
            return il2cpp::create_object<app::ListContainerImageTagsRequest>(get_class());
        }
    } // namespace ListContainerImageTagsRequest
} // namespace app::classes::types

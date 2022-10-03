#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ListContainerImageTagsResponse {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ListContainerImageTagsResponse__Class** type_info;
        inline app::ListContainerImageTagsResponse__Class* get_class() {
            return il2cpp::get_class<app::ListContainerImageTagsResponse__Class>(type_info, "PlayFab.MultiplayerModels", "ListContainerImageTagsResponse");
        }
        inline app::ListContainerImageTagsResponse* create() {
            return il2cpp::create_object<app::ListContainerImageTagsResponse>(get_class());
        }
    } // namespace ListContainerImageTagsResponse
} // namespace app::classes::types

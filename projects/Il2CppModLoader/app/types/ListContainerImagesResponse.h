#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ListContainerImagesResponse {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ListContainerImagesResponse__Class** type_info;
        inline app::ListContainerImagesResponse__Class* get_class() {
            return il2cpp::get_class<app::ListContainerImagesResponse__Class>(type_info, "PlayFab.MultiplayerModels", "ListContainerImagesResponse");
        }
        inline app::ListContainerImagesResponse* create() {
            return il2cpp::create_object<app::ListContainerImagesResponse>(get_class());
        }
    } // namespace ListContainerImagesResponse
} // namespace app::classes::types

#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ListContainerImagesRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ListContainerImagesRequest__Class** type_info;
        inline app::ListContainerImagesRequest__Class* get_class() {
            return il2cpp::get_class<app::ListContainerImagesRequest__Class>(type_info, "PlayFab.MultiplayerModels", "ListContainerImagesRequest");
        }
        inline app::ListContainerImagesRequest* create() {
            return il2cpp::create_object<app::ListContainerImagesRequest>(get_class());
        }
    } // namespace ListContainerImagesRequest
} // namespace app::classes::types

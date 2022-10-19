#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ListContainerImagesRequest {
        inline app::ListContainerImagesRequest__Class** type_info = (app::ListContainerImagesRequest__Class**)(modloader::win::memory::resolve_rva(0x0472ADD0));
        inline app::ListContainerImagesRequest__Class* get_class() {
            return il2cpp::get_class<app::ListContainerImagesRequest__Class>(type_info, "PlayFab.MultiplayerModels", "ListContainerImagesRequest");
        }
        inline app::ListContainerImagesRequest* create() {
            return il2cpp::create_object<app::ListContainerImagesRequest>(get_class());
        }
    } // namespace ListContainerImagesRequest
} // namespace app::classes::types

#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ListContainerImagesResponse {
        inline app::ListContainerImagesResponse__Class** type_info = (app::ListContainerImagesResponse__Class**)(modloader::win::memory::resolve_rva(0x047714B8));
        inline app::ListContainerImagesResponse__Class* get_class() {
            return il2cpp::get_class<app::ListContainerImagesResponse__Class>(type_info, "PlayFab.MultiplayerModels", "ListContainerImagesResponse");
        }
        inline app::ListContainerImagesResponse* create() {
            return il2cpp::create_object<app::ListContainerImagesResponse>(get_class());
        }
    } // namespace ListContainerImagesResponse
} // namespace app::classes::types

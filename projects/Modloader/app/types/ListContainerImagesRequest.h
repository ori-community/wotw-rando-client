#pragma once
#include <Modloader/app/structs/ListContainerImagesRequest.h>
#include <Modloader/app/structs/ListContainerImagesRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ListContainerImagesRequest {
        inline app::ListContainerImagesRequest__Class** type_info() {
            static app::ListContainerImagesRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ListContainerImagesRequest__Class**)(modloader::win::memory::resolve_rva(0x0472ADD0));
            }
            return cache;
        }
        inline app::ListContainerImagesRequest__Class* get_class() {
            return il2cpp::get_class<app::ListContainerImagesRequest__Class>(type_info(), "PlayFab.MultiplayerModels", "ListContainerImagesRequest");
        }
        inline app::ListContainerImagesRequest* create() {
            return il2cpp::create_object<app::ListContainerImagesRequest>(get_class());
        }
    } // namespace ListContainerImagesRequest
} // namespace app::classes::types

#pragma once
#include <Modloader/app/structs/ListContainerImageTagsRequest.h>
#include <Modloader/app/structs/ListContainerImageTagsRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ListContainerImageTagsRequest {
        inline app::ListContainerImageTagsRequest__Class** type_info() {
            static app::ListContainerImageTagsRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ListContainerImageTagsRequest__Class**)(modloader::win::memory::resolve_rva(0x047992D0));
            }
            return cache;
        }
        inline app::ListContainerImageTagsRequest__Class* get_class() {
            return il2cpp::get_class<app::ListContainerImageTagsRequest__Class>(type_info(), "PlayFab.MultiplayerModels", "ListContainerImageTagsRequest");
        }
        inline app::ListContainerImageTagsRequest* create() {
            return il2cpp::create_object<app::ListContainerImageTagsRequest>(get_class());
        }
    } // namespace ListContainerImageTagsRequest
} // namespace app::classes::types

#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ListContainerImageTagsRequest__Class.h>
#include <Modloader/app/structs/ListContainerImageTagsRequest.h>

namespace app::classes::types {
    namespace ListContainerImageTagsRequest {
        inline app::ListContainerImageTagsRequest__Class** type_info = (app::ListContainerImageTagsRequest__Class**)(modloader::win::memory::resolve_rva(0x047992D0));
        inline app::ListContainerImageTagsRequest__Class* get_class() {
            return il2cpp::get_class<app::ListContainerImageTagsRequest__Class>(type_info, "PlayFab.MultiplayerModels", "ListContainerImageTagsRequest");
        }
        inline app::ListContainerImageTagsRequest* create() {
            return il2cpp::create_object<app::ListContainerImageTagsRequest>(get_class());
        }
    } // namespace ListContainerImageTagsRequest
} // namespace app::classes::types

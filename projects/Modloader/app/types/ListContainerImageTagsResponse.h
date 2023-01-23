#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ListContainerImageTagsResponse__Class.h>
#include <Modloader/app/structs/ListContainerImageTagsResponse.h>

namespace app::classes::types {
    namespace ListContainerImageTagsResponse {
        inline app::ListContainerImageTagsResponse__Class** type_info = (app::ListContainerImageTagsResponse__Class**)(modloader::win::memory::resolve_rva(0x0476B828));
        inline app::ListContainerImageTagsResponse__Class* get_class() {
            return il2cpp::get_class<app::ListContainerImageTagsResponse__Class>(type_info, "PlayFab.MultiplayerModels", "ListContainerImageTagsResponse");
        }
        inline app::ListContainerImageTagsResponse* create() {
            return il2cpp::create_object<app::ListContainerImageTagsResponse>(get_class());
        }
    } // namespace ListContainerImageTagsResponse
} // namespace app::classes::types

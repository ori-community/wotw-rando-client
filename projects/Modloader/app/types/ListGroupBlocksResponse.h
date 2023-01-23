#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ListGroupBlocksResponse__Class.h>
#include <Modloader/app/structs/ListGroupBlocksResponse.h>

namespace app::classes::types {
    namespace ListGroupBlocksResponse {
        inline app::ListGroupBlocksResponse__Class** type_info = (app::ListGroupBlocksResponse__Class**)(modloader::win::memory::resolve_rva(0x0470ED50));
        inline app::ListGroupBlocksResponse__Class* get_class() {
            return il2cpp::get_class<app::ListGroupBlocksResponse__Class>(type_info, "PlayFab.GroupsModels", "ListGroupBlocksResponse");
        }
        inline app::ListGroupBlocksResponse* create() {
            return il2cpp::create_object<app::ListGroupBlocksResponse>(get_class());
        }
    } // namespace ListGroupBlocksResponse
} // namespace app::classes::types

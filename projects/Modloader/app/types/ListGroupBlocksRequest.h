#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ListGroupBlocksRequest__Class.h>
#include <Modloader/app/structs/ListGroupBlocksRequest.h>

namespace app::classes::types {
    namespace ListGroupBlocksRequest {
        inline app::ListGroupBlocksRequest__Class** type_info = (app::ListGroupBlocksRequest__Class**)(modloader::win::memory::resolve_rva(0x04771EF8));
        inline app::ListGroupBlocksRequest__Class* get_class() {
            return il2cpp::get_class<app::ListGroupBlocksRequest__Class>(type_info, "PlayFab.GroupsModels", "ListGroupBlocksRequest");
        }
        inline app::ListGroupBlocksRequest* create() {
            return il2cpp::create_object<app::ListGroupBlocksRequest>(get_class());
        }
    } // namespace ListGroupBlocksRequest
} // namespace app::classes::types

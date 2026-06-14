#pragma once
#include <Modloader/app/structs/ListGroupBlocksRequest.h>
#include <Modloader/app/structs/ListGroupBlocksRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ListGroupBlocksRequest {
        inline app::ListGroupBlocksRequest__Class** type_info() {
            static app::ListGroupBlocksRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ListGroupBlocksRequest__Class**)(modloader::win::memory::resolve_rva(0x04771EF8));
            }
            return cache;
        }
        inline app::ListGroupBlocksRequest__Class* get_class() {
            return il2cpp::get_class<app::ListGroupBlocksRequest__Class>(type_info(), "PlayFab.GroupsModels", "ListGroupBlocksRequest");
        }
        inline app::ListGroupBlocksRequest* create() {
            return il2cpp::create_object<app::ListGroupBlocksRequest>(get_class());
        }
    } // namespace ListGroupBlocksRequest
} // namespace app::classes::types

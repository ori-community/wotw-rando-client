#pragma once
#include <Modloader/app/structs/GrantItemsToUsersRequest.h>
#include <Modloader/app/structs/GrantItemsToUsersRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GrantItemsToUsersRequest {
        inline app::GrantItemsToUsersRequest__Class** type_info() {
            static app::GrantItemsToUsersRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GrantItemsToUsersRequest__Class**)(modloader::win::memory::resolve_rva(0x047207E0));
            }
            return cache;
        }
        inline app::GrantItemsToUsersRequest__Class* get_class() {
            return il2cpp::get_class<app::GrantItemsToUsersRequest__Class>(type_info(), "PlayFab.ServerModels", "GrantItemsToUsersRequest");
        }
        inline app::GrantItemsToUsersRequest* create() {
            return il2cpp::create_object<app::GrantItemsToUsersRequest>(get_class());
        }
    } // namespace GrantItemsToUsersRequest
} // namespace app::classes::types

#pragma once
#include <Modloader/app/structs/GrantItemsToUsersResult.h>
#include <Modloader/app/structs/GrantItemsToUsersResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GrantItemsToUsersResult {
        inline app::GrantItemsToUsersResult__Class** type_info() {
            static app::GrantItemsToUsersResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GrantItemsToUsersResult__Class**)(modloader::win::memory::resolve_rva(0x0476F408));
            }
            return cache;
        }
        inline app::GrantItemsToUsersResult__Class* get_class() {
            return il2cpp::get_class<app::GrantItemsToUsersResult__Class>(type_info(), "PlayFab.ServerModels", "GrantItemsToUsersResult");
        }
        inline app::GrantItemsToUsersResult* create() {
            return il2cpp::create_object<app::GrantItemsToUsersResult>(get_class());
        }
    } // namespace GrantItemsToUsersResult
} // namespace app::classes::types

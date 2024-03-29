#pragma once
#include <Modloader/app/structs/GrantItemsToUserResult.h>
#include <Modloader/app/structs/GrantItemsToUserResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GrantItemsToUserResult {
        inline app::GrantItemsToUserResult__Class** type_info() {
            static app::GrantItemsToUserResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GrantItemsToUserResult__Class**)(modloader::win::memory::resolve_rva(0x04717F28));
            }
            return cache;
        }
        inline app::GrantItemsToUserResult__Class* get_class() {
            return il2cpp::get_class<app::GrantItemsToUserResult__Class>(type_info(), "PlayFab.ServerModels", "GrantItemsToUserResult");
        }
        inline app::GrantItemsToUserResult* create() {
            return il2cpp::create_object<app::GrantItemsToUserResult>(get_class());
        }
    } // namespace GrantItemsToUserResult
} // namespace app::classes::types

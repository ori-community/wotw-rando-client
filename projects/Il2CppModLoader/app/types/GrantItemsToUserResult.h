#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GrantItemsToUserResult {
        inline app::GrantItemsToUserResult__Class** type_info = (app::GrantItemsToUserResult__Class**)(modloader::win::memory::resolve_rva(0x04717F28));
        inline app::GrantItemsToUserResult__Class* get_class() {
            return il2cpp::get_class<app::GrantItemsToUserResult__Class>(type_info, "PlayFab.ServerModels", "GrantItemsToUserResult");
        }
        inline app::GrantItemsToUserResult* create() {
            return il2cpp::create_object<app::GrantItemsToUserResult>(get_class());
        }
    } // namespace GrantItemsToUserResult
} // namespace app::classes::types

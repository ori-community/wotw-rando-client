#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GameServerRegionsResult {
        inline app::GameServerRegionsResult__Class** type_info = (app::GameServerRegionsResult__Class**)(modloader::win::memory::resolve_rva(0x0477E9C8));
        inline app::GameServerRegionsResult__Class* get_class() {
            return il2cpp::get_class<app::GameServerRegionsResult__Class>(type_info, "PlayFab.ClientModels", "GameServerRegionsResult");
        }
        inline app::GameServerRegionsResult* create() {
            return il2cpp::create_object<app::GameServerRegionsResult>(get_class());
        }
    } // namespace GameServerRegionsResult
} // namespace app::classes::types

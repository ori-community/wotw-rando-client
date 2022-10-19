#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GameServerRegionsRequest {
        inline app::GameServerRegionsRequest__Class** type_info = (app::GameServerRegionsRequest__Class**)(modloader::win::memory::resolve_rva(0x04770768));
        inline app::GameServerRegionsRequest__Class* get_class() {
            return il2cpp::get_class<app::GameServerRegionsRequest__Class>(type_info, "PlayFab.ClientModels", "GameServerRegionsRequest");
        }
        inline app::GameServerRegionsRequest* create() {
            return il2cpp::create_object<app::GameServerRegionsRequest>(get_class());
        }
    } // namespace GameServerRegionsRequest
} // namespace app::classes::types

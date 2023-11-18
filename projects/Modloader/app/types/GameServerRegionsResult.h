#pragma once
#include <Modloader/app/structs/GameServerRegionsResult.h>
#include <Modloader/app/structs/GameServerRegionsResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GameServerRegionsResult {
        inline app::GameServerRegionsResult__Class** type_info() {
            static app::GameServerRegionsResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GameServerRegionsResult__Class**)(modloader::win::memory::resolve_rva(0x0477E9C8));
            }
            return cache;
        }
        inline app::GameServerRegionsResult__Class* get_class() {
            return il2cpp::get_class<app::GameServerRegionsResult__Class>(type_info(), "PlayFab.ClientModels", "GameServerRegionsResult");
        }
        inline app::GameServerRegionsResult* create() {
            return il2cpp::create_object<app::GameServerRegionsResult>(get_class());
        }
    } // namespace GameServerRegionsResult
} // namespace app::classes::types

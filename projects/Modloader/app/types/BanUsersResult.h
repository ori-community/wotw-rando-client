#pragma once
#include <Modloader/app/structs/BanUsersResult.h>
#include <Modloader/app/structs/BanUsersResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BanUsersResult {
        inline app::BanUsersResult__Class** type_info() {
            static app::BanUsersResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BanUsersResult__Class**)(modloader::win::memory::resolve_rva(0x0475E2D8));
            }
            return cache;
        }
        inline app::BanUsersResult__Class* get_class() {
            return il2cpp::get_class<app::BanUsersResult__Class>(type_info(), "PlayFab.ServerModels", "BanUsersResult");
        }
        inline app::BanUsersResult* create() {
            return il2cpp::create_object<app::BanUsersResult>(get_class());
        }
    } // namespace BanUsersResult
} // namespace app::classes::types

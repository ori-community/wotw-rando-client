#pragma once
#include <Modloader/app/structs/SteamUser.h>
#include <Modloader/app/structs/SteamUser__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SteamUser {
        inline app::SteamUser__Class** type_info() {
            static app::SteamUser__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SteamUser__Class**)(modloader::win::memory::resolve_rva(0x0478EA28));
            }
            return cache;
        }
        inline app::SteamUser__Class* get_class() {
            return il2cpp::get_class<app::SteamUser__Class>(type_info(), "SystemIntegration", "SteamUser");
        }
        inline app::SteamUser* create() {
            return il2cpp::create_object<app::SteamUser>(get_class());
        }
    } // namespace SteamUser
} // namespace app::classes::types

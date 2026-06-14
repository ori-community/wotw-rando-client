#pragma once
#include <Modloader/app/structs/CSteamGameServerAPIContext.h>
#include <Modloader/app/structs/CSteamGameServerAPIContext__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CSteamGameServerAPIContext {
        inline app::CSteamGameServerAPIContext__Class** type_info() {
            static app::CSteamGameServerAPIContext__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CSteamGameServerAPIContext__Class**)(modloader::win::memory::resolve_rva(0x0478CA70));
            }
            return cache;
        }
        inline app::CSteamGameServerAPIContext__Class* get_class() {
            return il2cpp::get_class<app::CSteamGameServerAPIContext__Class>(type_info(), "Steamworks", "CSteamGameServerAPIContext");
        }
        inline app::CSteamGameServerAPIContext* create() {
            return il2cpp::create_object<app::CSteamGameServerAPIContext>(get_class());
        }
    } // namespace CSteamGameServerAPIContext
} // namespace app::classes::types

#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CSteamGameServerAPIContext {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CSteamGameServerAPIContext__Class** type_info;
        inline app::CSteamGameServerAPIContext__Class* get_class() {
            return il2cpp::get_class<app::CSteamGameServerAPIContext__Class>(type_info, "Steamworks", "CSteamGameServerAPIContext");
        }
        inline app::CSteamGameServerAPIContext* create() {
            return il2cpp::create_object<app::CSteamGameServerAPIContext>(get_class());
        }
    } // namespace CSteamGameServerAPIContext
} // namespace app::classes::types

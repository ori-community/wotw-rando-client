#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GameLobbyJoinRequested_t {
        namespace {
            inline app::GameLobbyJoinRequested_t__Class* type_info_ref = nullptr;
        }
        inline app::GameLobbyJoinRequested_t__Class** type_info = &type_info_ref;
        inline app::GameLobbyJoinRequested_t__Class* get_class() {
            return il2cpp::get_class<app::GameLobbyJoinRequested_t__Class>(type_info, "Steamworks", "GameLobbyJoinRequested_t");
        }
        inline app::GameLobbyJoinRequested_t* create() {
            return il2cpp::create_object<app::GameLobbyJoinRequested_t>(get_class());
        }
        inline app::GameLobbyJoinRequested_t__Boxed* box(app::GameLobbyJoinRequested_t value) {
            return il2cpp::box_value<app::GameLobbyJoinRequested_t__Boxed>(get_class(), value);
        }
    } // namespace GameLobbyJoinRequested_t
} // namespace app::classes::types

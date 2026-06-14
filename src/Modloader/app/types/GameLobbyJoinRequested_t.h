#pragma once
#include <Modloader/app/structs/GameLobbyJoinRequested_t.h>
#include <Modloader/app/structs/GameLobbyJoinRequested_t__Boxed.h>
#include <Modloader/app/structs/GameLobbyJoinRequested_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GameLobbyJoinRequested_t {
        inline app::GameLobbyJoinRequested_t__Class** type_info() {
            static app::GameLobbyJoinRequested_t__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GameLobbyJoinRequested_t__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GameLobbyJoinRequested_t__Class* get_class() {
            return il2cpp::get_class<app::GameLobbyJoinRequested_t__Class>(type_info(), "Steamworks", "GameLobbyJoinRequested_t");
        }
        inline app::GameLobbyJoinRequested_t* create() {
            return il2cpp::create_object<app::GameLobbyJoinRequested_t>(get_class());
        }
        inline app::GameLobbyJoinRequested_t__Boxed* box(app::GameLobbyJoinRequested_t value) {
            return il2cpp::box_value<app::GameLobbyJoinRequested_t__Boxed>(get_class(), value);
        }
    } // namespace GameLobbyJoinRequested_t
} // namespace app::classes::types

#pragma once
#include <Modloader/app/structs/LobbyInvite_t.h>
#include <Modloader/app/structs/LobbyInvite_t__Boxed.h>
#include <Modloader/app/structs/LobbyInvite_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LobbyInvite_t {
        inline app::LobbyInvite_t__Class** type_info() {
            static app::LobbyInvite_t__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LobbyInvite_t__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LobbyInvite_t__Class* get_class() {
            return il2cpp::get_class<app::LobbyInvite_t__Class>(type_info(), "Steamworks", "LobbyInvite_t");
        }
        inline app::LobbyInvite_t* create() {
            return il2cpp::create_object<app::LobbyInvite_t>(get_class());
        }
        inline app::LobbyInvite_t__Boxed* box(app::LobbyInvite_t value) {
            return il2cpp::box_value<app::LobbyInvite_t__Boxed>(get_class(), value);
        }
    } // namespace LobbyInvite_t
} // namespace app::classes::types

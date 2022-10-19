#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LobbyInvite_t {
        namespace {
            inline app::LobbyInvite_t__Class* type_info_ref = nullptr;
        }
        inline app::LobbyInvite_t__Class** type_info = &type_info_ref;
        inline app::LobbyInvite_t__Class* get_class() {
            return il2cpp::get_class<app::LobbyInvite_t__Class>(type_info, "Steamworks", "LobbyInvite_t");
        }
        inline app::LobbyInvite_t* create() {
            return il2cpp::create_object<app::LobbyInvite_t>(get_class());
        }
        inline app::LobbyInvite_t__Boxed* box(app::LobbyInvite_t value) {
            return il2cpp::box_value<app::LobbyInvite_t__Boxed>(get_class(), value);
        }
    } // namespace LobbyInvite_t
} // namespace app::classes::types

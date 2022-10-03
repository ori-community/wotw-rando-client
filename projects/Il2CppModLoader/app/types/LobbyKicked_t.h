#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LobbyKicked_t {
        namespace {
            app::LobbyKicked_t__Class* type_info_ref = nullptr;
        }
        app::LobbyKicked_t__Class** type_info = &type_info_ref;
        inline app::LobbyKicked_t__Class* get_class() {
            return il2cpp::get_class<app::LobbyKicked_t__Class>(type_info, "Steamworks", "LobbyKicked_t");
        }
        inline app::LobbyKicked_t* create() {
            return il2cpp::create_object<app::LobbyKicked_t>(get_class());
        }
        inline app::LobbyKicked_t__Boxed* box(app::LobbyKicked_t value) {
            return il2cpp::box_value<app::LobbyKicked_t__Boxed>(get_class(), value);
        }
    } // namespace LobbyKicked_t
} // namespace app::classes::types

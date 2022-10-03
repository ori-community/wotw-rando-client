#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LobbyDataUpdate_t {
        namespace {
            app::LobbyDataUpdate_t__Class* type_info_ref = nullptr;
        }
        app::LobbyDataUpdate_t__Class** type_info = &type_info_ref;
        inline app::LobbyDataUpdate_t__Class* get_class() {
            return il2cpp::get_class<app::LobbyDataUpdate_t__Class>(type_info, "Steamworks", "LobbyDataUpdate_t");
        }
        inline app::LobbyDataUpdate_t* create() {
            return il2cpp::create_object<app::LobbyDataUpdate_t>(get_class());
        }
        inline app::LobbyDataUpdate_t__Boxed* box(app::LobbyDataUpdate_t value) {
            return il2cpp::box_value<app::LobbyDataUpdate_t__Boxed>(get_class(), value);
        }
    } // namespace LobbyDataUpdate_t
} // namespace app::classes::types

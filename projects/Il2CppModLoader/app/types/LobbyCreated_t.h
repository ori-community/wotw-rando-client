#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LobbyCreated_t {
        namespace {
            app::LobbyCreated_t__Class* type_info_ref = nullptr;
        }
        app::LobbyCreated_t__Class** type_info = &type_info_ref;
        inline app::LobbyCreated_t__Class* get_class() {
            return il2cpp::get_class<app::LobbyCreated_t__Class>(type_info, "Steamworks", "LobbyCreated_t");
        }
        inline app::LobbyCreated_t* create() {
            return il2cpp::create_object<app::LobbyCreated_t>(get_class());
        }
        inline app::LobbyCreated_t__Boxed* box(app::LobbyCreated_t value) {
            return il2cpp::box_value<app::LobbyCreated_t__Boxed>(get_class(), value);
        }
    } // namespace LobbyCreated_t
} // namespace app::classes::types

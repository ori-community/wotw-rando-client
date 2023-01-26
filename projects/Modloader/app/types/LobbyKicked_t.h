#pragma once
#include <Modloader/app/structs/LobbyKicked_t.h>
#include <Modloader/app/structs/LobbyKicked_t__Boxed.h>
#include <Modloader/app/structs/LobbyKicked_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LobbyKicked_t {
        inline app::LobbyKicked_t__Class** type_info() {
            static app::LobbyKicked_t__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LobbyKicked_t__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LobbyKicked_t__Class* get_class() {
            return il2cpp::get_class<app::LobbyKicked_t__Class>(type_info(), "Steamworks", "LobbyKicked_t");
        }
        inline app::LobbyKicked_t* create() {
            return il2cpp::create_object<app::LobbyKicked_t>(get_class());
        }
        inline app::LobbyKicked_t__Boxed* box(app::LobbyKicked_t value) {
            return il2cpp::box_value<app::LobbyKicked_t__Boxed>(get_class(), value);
        }
    } // namespace LobbyKicked_t
} // namespace app::classes::types

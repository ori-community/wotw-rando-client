#pragma once
#include <Modloader/app/structs/LobbyCreated_t.h>
#include <Modloader/app/structs/LobbyCreated_t__Boxed.h>
#include <Modloader/app/structs/LobbyCreated_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LobbyCreated_t {
        inline app::LobbyCreated_t__Class** type_info() {
            static app::LobbyCreated_t__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LobbyCreated_t__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LobbyCreated_t__Class* get_class() {
            return il2cpp::get_class<app::LobbyCreated_t__Class>(type_info(), "Steamworks", "LobbyCreated_t");
        }
        inline app::LobbyCreated_t* create() {
            return il2cpp::create_object<app::LobbyCreated_t>(get_class());
        }
        inline app::LobbyCreated_t__Boxed* box(app::LobbyCreated_t value) {
            return il2cpp::box_value<app::LobbyCreated_t__Boxed>(get_class(), value);
        }
    } // namespace LobbyCreated_t
} // namespace app::classes::types

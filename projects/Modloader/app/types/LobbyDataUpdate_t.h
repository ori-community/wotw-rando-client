#pragma once
#include <Modloader/app/structs/LobbyDataUpdate_t.h>
#include <Modloader/app/structs/LobbyDataUpdate_t__Boxed.h>
#include <Modloader/app/structs/LobbyDataUpdate_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LobbyDataUpdate_t {
        inline app::LobbyDataUpdate_t__Class** type_info() {
            static app::LobbyDataUpdate_t__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LobbyDataUpdate_t__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LobbyDataUpdate_t__Class* get_class() {
            return il2cpp::get_class<app::LobbyDataUpdate_t__Class>(type_info(), "Steamworks", "LobbyDataUpdate_t");
        }
        inline app::LobbyDataUpdate_t* create() {
            return il2cpp::create_object<app::LobbyDataUpdate_t>(get_class());
        }
        inline app::LobbyDataUpdate_t__Boxed* box(app::LobbyDataUpdate_t value) {
            return il2cpp::box_value<app::LobbyDataUpdate_t__Boxed>(get_class(), value);
        }
    } // namespace LobbyDataUpdate_t
} // namespace app::classes::types

#pragma once
#include <Modloader/app/structs/LobbyMatchList_t.h>
#include <Modloader/app/structs/LobbyMatchList_t__Boxed.h>
#include <Modloader/app/structs/LobbyMatchList_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LobbyMatchList_t {
        inline app::LobbyMatchList_t__Class** type_info() {
            static app::LobbyMatchList_t__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LobbyMatchList_t__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LobbyMatchList_t__Class* get_class() {
            return il2cpp::get_class<app::LobbyMatchList_t__Class>(type_info(), "Steamworks", "LobbyMatchList_t");
        }
        inline app::LobbyMatchList_t* create() {
            return il2cpp::create_object<app::LobbyMatchList_t>(get_class());
        }
        inline app::LobbyMatchList_t__Boxed* box(app::LobbyMatchList_t value) {
            return il2cpp::box_value<app::LobbyMatchList_t__Boxed>(get_class(), value);
        }
    } // namespace LobbyMatchList_t
} // namespace app::classes::types

#pragma once
#include <Modloader/app/structs/RequestPlayersForGameResultCallback_t.h>
#include <Modloader/app/structs/RequestPlayersForGameResultCallback_t__Boxed.h>
#include <Modloader/app/structs/RequestPlayersForGameResultCallback_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RequestPlayersForGameResultCallback_t {
        inline app::RequestPlayersForGameResultCallback_t__Class** type_info() {
            static app::RequestPlayersForGameResultCallback_t__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RequestPlayersForGameResultCallback_t__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RequestPlayersForGameResultCallback_t__Class* get_class() {
            return il2cpp::get_class<app::RequestPlayersForGameResultCallback_t__Class>(type_info(), "Steamworks", "RequestPlayersForGameResultCallback_t");
        }
        inline app::RequestPlayersForGameResultCallback_t* create() {
            return il2cpp::create_object<app::RequestPlayersForGameResultCallback_t>(get_class());
        }
        inline app::RequestPlayersForGameResultCallback_t__Boxed* box(app::RequestPlayersForGameResultCallback_t value) {
            return il2cpp::box_value<app::RequestPlayersForGameResultCallback_t__Boxed>(get_class(), value);
        }
    } // namespace RequestPlayersForGameResultCallback_t
} // namespace app::classes::types

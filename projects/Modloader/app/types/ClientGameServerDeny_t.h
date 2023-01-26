#pragma once
#include <Modloader/app/structs/ClientGameServerDeny_t.h>
#include <Modloader/app/structs/ClientGameServerDeny_t__Boxed.h>
#include <Modloader/app/structs/ClientGameServerDeny_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ClientGameServerDeny_t {
        inline app::ClientGameServerDeny_t__Class** type_info() {
            static app::ClientGameServerDeny_t__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ClientGameServerDeny_t__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ClientGameServerDeny_t__Class* get_class() {
            return il2cpp::get_class<app::ClientGameServerDeny_t__Class>(type_info(), "Steamworks", "ClientGameServerDeny_t");
        }
        inline app::ClientGameServerDeny_t* create() {
            return il2cpp::create_object<app::ClientGameServerDeny_t>(get_class());
        }
        inline app::ClientGameServerDeny_t__Boxed* box(app::ClientGameServerDeny_t value) {
            return il2cpp::box_value<app::ClientGameServerDeny_t__Boxed>(get_class(), value);
        }
    } // namespace ClientGameServerDeny_t
} // namespace app::classes::types

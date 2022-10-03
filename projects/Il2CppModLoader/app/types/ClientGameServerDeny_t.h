#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ClientGameServerDeny_t {
        namespace {
            app::ClientGameServerDeny_t__Class* type_info_ref = nullptr;
        }
        app::ClientGameServerDeny_t__Class** type_info = &type_info_ref;
        inline app::ClientGameServerDeny_t__Class* get_class() {
            return il2cpp::get_class<app::ClientGameServerDeny_t__Class>(type_info, "Steamworks", "ClientGameServerDeny_t");
        }
        inline app::ClientGameServerDeny_t* create() {
            return il2cpp::create_object<app::ClientGameServerDeny_t>(get_class());
        }
        inline app::ClientGameServerDeny_t__Boxed* box(app::ClientGameServerDeny_t value) {
            return il2cpp::box_value<app::ClientGameServerDeny_t__Boxed>(get_class(), value);
        }
    } // namespace ClientGameServerDeny_t
} // namespace app::classes::types

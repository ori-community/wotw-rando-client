#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace P2PSessionConnectFail_t {
        namespace {
            app::P2PSessionConnectFail_t__Class* type_info_ref = nullptr;
        }
        app::P2PSessionConnectFail_t__Class** type_info = &type_info_ref;
        inline app::P2PSessionConnectFail_t__Class* get_class() {
            return il2cpp::get_class<app::P2PSessionConnectFail_t__Class>(type_info, "Steamworks", "P2PSessionConnectFail_t");
        }
        inline app::P2PSessionConnectFail_t* create() {
            return il2cpp::create_object<app::P2PSessionConnectFail_t>(get_class());
        }
        inline app::P2PSessionConnectFail_t__Boxed* box(app::P2PSessionConnectFail_t value) {
            return il2cpp::box_value<app::P2PSessionConnectFail_t__Boxed>(get_class(), value);
        }
    } // namespace P2PSessionConnectFail_t
} // namespace app::classes::types

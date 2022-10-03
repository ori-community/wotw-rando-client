#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ServerRigidbody {
        namespace {
            app::ServerRigidbody__Class* type_info_ref = nullptr;
        }
        app::ServerRigidbody__Class** type_info = &type_info_ref;
        inline app::ServerRigidbody__Class* get_class() {
            return il2cpp::get_class<app::ServerRigidbody__Class>(type_info, "", "ServerRigidbody");
        }
        inline app::ServerRigidbody* create() {
            return il2cpp::create_object<app::ServerRigidbody>(get_class());
        }
    } // namespace ServerRigidbody
} // namespace app::classes::types

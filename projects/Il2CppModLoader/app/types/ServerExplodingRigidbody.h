#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ServerExplodingRigidbody {
        namespace {
            app::ServerExplodingRigidbody__Class* type_info_ref = nullptr;
        }
        app::ServerExplodingRigidbody__Class** type_info = &type_info_ref;
        inline app::ServerExplodingRigidbody__Class* get_class() {
            return il2cpp::get_class<app::ServerExplodingRigidbody__Class>(type_info, "", "ServerExplodingRigidbody");
        }
        inline app::ServerExplodingRigidbody* create() {
            return il2cpp::create_object<app::ServerExplodingRigidbody>(get_class());
        }
    } // namespace ServerExplodingRigidbody
} // namespace app::classes::types

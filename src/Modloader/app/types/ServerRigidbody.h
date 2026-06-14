#pragma once
#include <Modloader/app/structs/ServerRigidbody.h>
#include <Modloader/app/structs/ServerRigidbody__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ServerRigidbody {
        inline app::ServerRigidbody__Class** type_info() {
            static app::ServerRigidbody__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ServerRigidbody__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ServerRigidbody__Class* get_class() {
            return il2cpp::get_class<app::ServerRigidbody__Class>(type_info(), "", "ServerRigidbody");
        }
        inline app::ServerRigidbody* create() {
            return il2cpp::create_object<app::ServerRigidbody>(get_class());
        }
    } // namespace ServerRigidbody
} // namespace app::classes::types

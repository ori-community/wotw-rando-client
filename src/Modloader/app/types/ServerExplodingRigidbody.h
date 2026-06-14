#pragma once
#include <Modloader/app/structs/ServerExplodingRigidbody.h>
#include <Modloader/app/structs/ServerExplodingRigidbody__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ServerExplodingRigidbody {
        inline app::ServerExplodingRigidbody__Class** type_info() {
            static app::ServerExplodingRigidbody__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ServerExplodingRigidbody__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ServerExplodingRigidbody__Class* get_class() {
            return il2cpp::get_class<app::ServerExplodingRigidbody__Class>(type_info(), "", "ServerExplodingRigidbody");
        }
        inline app::ServerExplodingRigidbody* create() {
            return il2cpp::create_object<app::ServerExplodingRigidbody>(get_class());
        }
    } // namespace ServerExplodingRigidbody
} // namespace app::classes::types

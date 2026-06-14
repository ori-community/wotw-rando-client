#pragma once
#include <Modloader/app/structs/ServerBoxCollider.h>
#include <Modloader/app/structs/ServerBoxCollider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ServerBoxCollider {
        inline app::ServerBoxCollider__Class** type_info() {
            static app::ServerBoxCollider__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ServerBoxCollider__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ServerBoxCollider__Class* get_class() {
            return il2cpp::get_class<app::ServerBoxCollider__Class>(type_info(), "", "ServerBoxCollider");
        }
        inline app::ServerBoxCollider* create() {
            return il2cpp::create_object<app::ServerBoxCollider>(get_class());
        }
    } // namespace ServerBoxCollider
} // namespace app::classes::types

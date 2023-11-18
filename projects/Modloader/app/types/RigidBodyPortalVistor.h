#pragma once
#include <Modloader/app/structs/RigidBodyPortalVistor.h>
#include <Modloader/app/structs/RigidBodyPortalVistor__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RigidBodyPortalVistor {
        inline app::RigidBodyPortalVistor__Class** type_info() {
            static app::RigidBodyPortalVistor__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RigidBodyPortalVistor__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RigidBodyPortalVistor__Class* get_class() {
            return il2cpp::get_class<app::RigidBodyPortalVistor__Class>(type_info(), "", "RigidBodyPortalVistor");
        }
        inline app::RigidBodyPortalVistor* create() {
            return il2cpp::create_object<app::RigidBodyPortalVistor>(get_class());
        }
    } // namespace RigidBodyPortalVistor
} // namespace app::classes::types

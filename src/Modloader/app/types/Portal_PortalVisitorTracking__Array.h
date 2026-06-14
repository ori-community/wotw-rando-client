#pragma once
#include <Modloader/app/structs/Portal_PortalVisitorTracking__Array.h>
#include <Modloader/app/structs/Portal_PortalVisitorTracking__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Portal_PortalVisitorTracking__Array {
        inline app::Portal_PortalVisitorTracking__Array__Class** type_info() {
            static app::Portal_PortalVisitorTracking__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Portal_PortalVisitorTracking__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Portal_PortalVisitorTracking__Array__Class* get_class() {
            return il2cpp::get_class<app::Portal_PortalVisitorTracking__Array__Class>(type_info(), "", "Portal+PortalVisitorTracking[]");
        }
        inline app::Portal_PortalVisitorTracking__Array* create() {
            return il2cpp::create_object<app::Portal_PortalVisitorTracking__Array>(get_class());
        }
    } // namespace Portal_PortalVisitorTracking__Array
} // namespace app::classes::types

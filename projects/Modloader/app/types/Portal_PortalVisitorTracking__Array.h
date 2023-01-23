#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Portal_PortalVisitorTracking__Array__Class.h>
#include <Modloader/app/structs/Portal_PortalVisitorTracking__Array.h>

namespace app::classes::types {
    namespace Portal_PortalVisitorTracking__Array {
        namespace {
            inline app::Portal_PortalVisitorTracking__Array__Class* type_info_ref = nullptr;
        }
        inline app::Portal_PortalVisitorTracking__Array__Class** type_info = &type_info_ref;
        inline app::Portal_PortalVisitorTracking__Array__Class* get_class() {
            return il2cpp::get_class<app::Portal_PortalVisitorTracking__Array__Class>(type_info, "", "Portal+PortalVisitorTracking[]");
        }
        inline app::Portal_PortalVisitorTracking__Array* create() {
            return il2cpp::create_object<app::Portal_PortalVisitorTracking__Array>(get_class());
        }
    } // namespace Portal_PortalVisitorTracking__Array
} // namespace app::classes::types

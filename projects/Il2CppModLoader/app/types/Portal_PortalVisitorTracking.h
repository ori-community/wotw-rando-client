#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Portal_PortalVisitorTracking {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Portal_PortalVisitorTracking__Class** type_info;
        inline app::Portal_PortalVisitorTracking__Class* get_class() {
            return il2cpp::get_nested_class<app::Portal_PortalVisitorTracking__Class>(type_info, "", "Portal", "PortalVisitorTracking");
        }
        inline app::Portal_PortalVisitorTracking* create() {
            return il2cpp::create_object<app::Portal_PortalVisitorTracking>(get_class());
        }
        inline app::Portal_PortalVisitorTracking__Array* create_array(int size) {
            return il2cpp::array_new<app::Portal_PortalVisitorTracking__Array>(get_class(), size);
        }
        inline app::Portal_PortalVisitorTracking__Array* create_array(const std::vector<app::Portal_PortalVisitorTracking*>& items) {
            return il2cpp::array_new<app::Portal_PortalVisitorTracking__Array>(get_class(), items);
        }
    } // namespace Portal_PortalVisitorTracking
} // namespace app::classes::types

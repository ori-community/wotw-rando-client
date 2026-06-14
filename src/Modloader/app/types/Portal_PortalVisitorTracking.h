#pragma once
#include <Modloader/app/structs/Portal_PortalVisitorTracking.h>
#include <Modloader/app/structs/Portal_PortalVisitorTracking__Array.h>
#include <Modloader/app/structs/Portal_PortalVisitorTracking__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Portal_PortalVisitorTracking {
        inline app::Portal_PortalVisitorTracking__Class** type_info() {
            static app::Portal_PortalVisitorTracking__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Portal_PortalVisitorTracking__Class**)(modloader::win::memory::resolve_rva(0x0471DA68));
            }
            return cache;
        }
        inline app::Portal_PortalVisitorTracking__Class* get_class() {
            return il2cpp::get_nested_class<app::Portal_PortalVisitorTracking__Class>(type_info(), "", "Portal", "PortalVisitorTracking");
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

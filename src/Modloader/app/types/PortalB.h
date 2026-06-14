#pragma once
#include <Modloader/app/structs/PortalB.h>
#include <Modloader/app/structs/PortalB__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PortalB {
        inline app::PortalB__Class** type_info() {
            static app::PortalB__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PortalB__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PortalB__Class* get_class() {
            return il2cpp::get_class<app::PortalB__Class>(type_info(), "", "PortalB");
        }
        inline app::PortalB* create() {
            return il2cpp::create_object<app::PortalB>(get_class());
        }
    } // namespace PortalB
} // namespace app::classes::types

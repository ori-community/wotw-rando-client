#pragma once
#include <Modloader/app/structs/PlatformMovementPortalVisitor_c.h>
#include <Modloader/app/structs/PlatformMovementPortalVisitor_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlatformMovementPortalVisitor_c {
        inline app::PlatformMovementPortalVisitor_c__Class** type_info() {
            static app::PlatformMovementPortalVisitor_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PlatformMovementPortalVisitor_c__Class**)(modloader::win::memory::resolve_rva(0x04714460));
            }
            return cache;
        }
        inline app::PlatformMovementPortalVisitor_c__Class* get_class() {
            return il2cpp::get_nested_class<app::PlatformMovementPortalVisitor_c__Class>(type_info(), "", "PlatformMovementPortalVisitor", "<>c");
        }
        inline app::PlatformMovementPortalVisitor_c* create() {
            return il2cpp::create_object<app::PlatformMovementPortalVisitor_c>(get_class());
        }
    } // namespace PlatformMovementPortalVisitor_c
} // namespace app::classes::types

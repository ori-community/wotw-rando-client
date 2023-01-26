#pragma once
#include <Modloader/app/structs/PlatformMovementPortalVisitor.h>
#include <Modloader/app/structs/PlatformMovementPortalVisitor__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlatformMovementPortalVisitor {
        inline app::PlatformMovementPortalVisitor__Class** type_info() {
            static app::PlatformMovementPortalVisitor__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PlatformMovementPortalVisitor__Class**)(modloader::win::memory::resolve_rva(0x0476CFB8));
            }
            return cache;
        }
        inline app::PlatformMovementPortalVisitor__Class* get_class() {
            return il2cpp::get_class<app::PlatformMovementPortalVisitor__Class>(type_info(), "", "PlatformMovementPortalVisitor");
        }
        inline app::PlatformMovementPortalVisitor* create() {
            return il2cpp::create_object<app::PlatformMovementPortalVisitor>(get_class());
        }
    } // namespace PlatformMovementPortalVisitor
} // namespace app::classes::types

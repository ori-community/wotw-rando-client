#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlatformMovementPortalVisitor {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PlatformMovementPortalVisitor__Class** type_info;
        inline app::PlatformMovementPortalVisitor__Class* get_class() {
            return il2cpp::get_class<app::PlatformMovementPortalVisitor__Class>(type_info, "", "PlatformMovementPortalVisitor");
        }
        inline app::PlatformMovementPortalVisitor* create() {
            return il2cpp::create_object<app::PlatformMovementPortalVisitor>(get_class());
        }
    } // namespace PlatformMovementPortalVisitor
} // namespace app::classes::types

#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlatformMovementPortalVisitor_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PlatformMovementPortalVisitor_c__Class** type_info;
        inline app::PlatformMovementPortalVisitor_c__Class* get_class() {
            return il2cpp::get_nested_class<app::PlatformMovementPortalVisitor_c__Class>(type_info, "", "PlatformMovementPortalVisitor", "<>c");
        }
        inline app::PlatformMovementPortalVisitor_c* create() {
            return il2cpp::create_object<app::PlatformMovementPortalVisitor_c>(get_class());
        }
    } // namespace PlatformMovementPortalVisitor_c
} // namespace app::classes::types

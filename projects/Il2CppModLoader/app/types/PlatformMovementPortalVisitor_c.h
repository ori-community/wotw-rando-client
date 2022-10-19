#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlatformMovementPortalVisitor_c {
        inline app::PlatformMovementPortalVisitor_c__Class** type_info = (app::PlatformMovementPortalVisitor_c__Class**)(modloader::win::memory::resolve_rva(0x04714460));
        inline app::PlatformMovementPortalVisitor_c__Class* get_class() {
            return il2cpp::get_nested_class<app::PlatformMovementPortalVisitor_c__Class>(type_info, "", "PlatformMovementPortalVisitor", "<>c");
        }
        inline app::PlatformMovementPortalVisitor_c* create() {
            return il2cpp::create_object<app::PlatformMovementPortalVisitor_c>(get_class());
        }
    } // namespace PlatformMovementPortalVisitor_c
} // namespace app::classes::types

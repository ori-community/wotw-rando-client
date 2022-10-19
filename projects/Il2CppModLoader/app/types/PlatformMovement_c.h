#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlatformMovement_c {
        inline app::PlatformMovement_c__Class** type_info = (app::PlatformMovement_c__Class**)(modloader::win::memory::resolve_rva(0x04732980));
        inline app::PlatformMovement_c__Class* get_class() {
            return il2cpp::get_nested_class<app::PlatformMovement_c__Class>(type_info, "", "PlatformMovement", "<>c");
        }
        inline app::PlatformMovement_c* create() {
            return il2cpp::create_object<app::PlatformMovement_c>(get_class());
        }
    } // namespace PlatformMovement_c
} // namespace app::classes::types

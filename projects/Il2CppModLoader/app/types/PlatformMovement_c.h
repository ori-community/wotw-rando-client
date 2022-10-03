#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlatformMovement_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PlatformMovement_c__Class** type_info;
        inline app::PlatformMovement_c__Class* get_class() {
            return il2cpp::get_nested_class<app::PlatformMovement_c__Class>(type_info, "", "PlatformMovement", "<>c");
        }
        inline app::PlatformMovement_c* create() {
            return il2cpp::create_object<app::PlatformMovement_c>(get_class());
        }
    } // namespace PlatformMovement_c
} // namespace app::classes::types

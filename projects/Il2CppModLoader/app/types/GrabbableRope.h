#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GrabbableRope {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GrabbableRope__Class** type_info;
        inline app::GrabbableRope__Class* get_class() {
            return il2cpp::get_class<app::GrabbableRope__Class>(type_info, "", "GrabbableRope");
        }
        inline app::GrabbableRope* create() {
            return il2cpp::create_object<app::GrabbableRope>(get_class());
        }
    } // namespace GrabbableRope
} // namespace app::classes::types

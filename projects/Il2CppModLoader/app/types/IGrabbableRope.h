#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IGrabbableRope {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IGrabbableRope__Class** type_info;
        inline app::IGrabbableRope__Class* get_class() {
            return il2cpp::get_class<app::IGrabbableRope__Class>(type_info, "", "IGrabbableRope");
        }
        inline app::IGrabbableRope* create() {
            return il2cpp::create_object<app::IGrabbableRope>(get_class());
        }
        inline app::IGrabbableRope__Array* create_array(int size) {
            return il2cpp::array_new<app::IGrabbableRope__Array>(get_class(), size);
        }
    } // namespace IGrabbableRope
} // namespace app::classes::types

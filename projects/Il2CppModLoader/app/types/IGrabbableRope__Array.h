#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IGrabbableRope__Array {
        namespace {
            inline app::IGrabbableRope__Array__Class* type_info_ref = nullptr;
        }
        inline app::IGrabbableRope__Array__Class** type_info = &type_info_ref;
        inline app::IGrabbableRope__Array__Class* get_class() {
            return il2cpp::get_class<app::IGrabbableRope__Array__Class>(type_info, "", "IGrabbableRope[]");
        }
        inline app::IGrabbableRope__Array* create() {
            return il2cpp::create_object<app::IGrabbableRope__Array>(get_class());
        }
    } // namespace IGrabbableRope__Array
} // namespace app::classes::types

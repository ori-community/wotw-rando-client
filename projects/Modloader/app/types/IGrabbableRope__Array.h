#pragma once
#include <Modloader/app/structs/IGrabbableRope__Array.h>
#include <Modloader/app/structs/IGrabbableRope__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IGrabbableRope__Array {
        inline app::IGrabbableRope__Array__Class** type_info() {
            static app::IGrabbableRope__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IGrabbableRope__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IGrabbableRope__Array__Class* get_class() {
            return il2cpp::get_class<app::IGrabbableRope__Array__Class>(type_info(), "", "IGrabbableRope[]");
        }
        inline app::IGrabbableRope__Array* create() {
            return il2cpp::create_object<app::IGrabbableRope__Array>(get_class());
        }
    } // namespace IGrabbableRope__Array
} // namespace app::classes::types

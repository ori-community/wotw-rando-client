#pragma once
#include <Modloader/app/structs/DetachFromRope.h>
#include <Modloader/app/structs/DetachFromRope__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DetachFromRope {
        inline app::DetachFromRope__Class** type_info() {
            static app::DetachFromRope__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DetachFromRope__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DetachFromRope__Class* get_class() {
            return il2cpp::get_class<app::DetachFromRope__Class>(type_info(), "", "DetachFromRope");
        }
        inline app::DetachFromRope* create() {
            return il2cpp::create_object<app::DetachFromRope>(get_class());
        }
    } // namespace DetachFromRope
} // namespace app::classes::types

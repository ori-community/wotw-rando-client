#pragma once
#include <Modloader/app/structs/GrabbableRope.h>
#include <Modloader/app/structs/GrabbableRope__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GrabbableRope {
        inline app::GrabbableRope__Class** type_info() {
            static app::GrabbableRope__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GrabbableRope__Class**)(modloader::win::memory::resolve_rva(0x04782EF8));
            }
            return cache;
        }
        inline app::GrabbableRope__Class* get_class() {
            return il2cpp::get_class<app::GrabbableRope__Class>(type_info(), "", "GrabbableRope");
        }
        inline app::GrabbableRope* create() {
            return il2cpp::create_object<app::GrabbableRope>(get_class());
        }
    } // namespace GrabbableRope
} // namespace app::classes::types

#pragma once
#include <Modloader/app/structs/SeinGrabRope.h>
#include <Modloader/app/structs/SeinGrabRope__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinGrabRope {
        inline app::SeinGrabRope__Class** type_info() {
            static app::SeinGrabRope__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinGrabRope__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinGrabRope__Class* get_class() {
            return il2cpp::get_class<app::SeinGrabRope__Class>(type_info(), "", "SeinGrabRope");
        }
        inline app::SeinGrabRope* create() {
            return il2cpp::create_object<app::SeinGrabRope>(get_class());
        }
    } // namespace SeinGrabRope
} // namespace app::classes::types

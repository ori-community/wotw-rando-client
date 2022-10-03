#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DetachFromRope {
        namespace {
            app::DetachFromRope__Class* type_info_ref = nullptr;
        }
        app::DetachFromRope__Class** type_info = &type_info_ref;
        inline app::DetachFromRope__Class* get_class() {
            return il2cpp::get_class<app::DetachFromRope__Class>(type_info, "", "DetachFromRope");
        }
        inline app::DetachFromRope* create() {
            return il2cpp::create_object<app::DetachFromRope>(get_class());
        }
    } // namespace DetachFromRope
} // namespace app::classes::types

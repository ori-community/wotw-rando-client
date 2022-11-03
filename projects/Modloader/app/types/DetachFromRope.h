#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DetachFromRope {
        namespace {
            inline app::DetachFromRope__Class* type_info_ref = nullptr;
        }
        inline app::DetachFromRope__Class** type_info = &type_info_ref;
        inline app::DetachFromRope__Class* get_class() {
            return il2cpp::get_class<app::DetachFromRope__Class>(type_info, "", "DetachFromRope");
        }
        inline app::DetachFromRope* create() {
            return il2cpp::create_object<app::DetachFromRope>(get_class());
        }
    } // namespace DetachFromRope
} // namespace app::classes::types

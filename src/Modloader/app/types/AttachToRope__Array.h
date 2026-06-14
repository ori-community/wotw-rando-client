#pragma once
#include <Modloader/app/structs/AttachToRope__Array.h>
#include <Modloader/app/structs/AttachToRope__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AttachToRope__Array {
        inline app::AttachToRope__Array__Class** type_info() {
            static app::AttachToRope__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AttachToRope__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AttachToRope__Array__Class* get_class() {
            return il2cpp::get_class<app::AttachToRope__Array__Class>(type_info(), "", "AttachToRope[]");
        }
        inline app::AttachToRope__Array* create() {
            return il2cpp::create_object<app::AttachToRope__Array>(get_class());
        }
    } // namespace AttachToRope__Array
} // namespace app::classes::types

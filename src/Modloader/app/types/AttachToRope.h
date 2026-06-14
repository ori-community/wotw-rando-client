#pragma once
#include <Modloader/app/structs/AttachToRope.h>
#include <Modloader/app/structs/AttachToRope__Array.h>
#include <Modloader/app/structs/AttachToRope__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AttachToRope {
        inline app::AttachToRope__Class** type_info() {
            static app::AttachToRope__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AttachToRope__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AttachToRope__Class* get_class() {
            return il2cpp::get_class<app::AttachToRope__Class>(type_info(), "", "AttachToRope");
        }
        inline app::AttachToRope* create() {
            return il2cpp::create_object<app::AttachToRope>(get_class());
        }
        inline app::AttachToRope__Array* create_array(int size) {
            return il2cpp::array_new<app::AttachToRope__Array>(get_class(), size);
        }
        inline app::AttachToRope__Array* create_array(const std::vector<app::AttachToRope*>& items) {
            return il2cpp::array_new<app::AttachToRope__Array>(get_class(), items);
        }
    } // namespace AttachToRope
} // namespace app::classes::types

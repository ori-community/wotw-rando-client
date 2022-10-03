#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AttachToRope__Array {
        namespace {
            app::AttachToRope__Array__Class* type_info_ref = nullptr;
        }
        app::AttachToRope__Array__Class** type_info = &type_info_ref;
        inline app::AttachToRope__Array__Class* get_class() {
            return il2cpp::get_class<app::AttachToRope__Array__Class>(type_info, "", "AttachToRope[]");
        }
        inline app::AttachToRope__Array* create() {
            return il2cpp::create_object<app::AttachToRope__Array>(get_class());
        }
    } // namespace AttachToRope__Array
} // namespace app::classes::types

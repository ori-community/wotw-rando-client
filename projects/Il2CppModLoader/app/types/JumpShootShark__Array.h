#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace JumpShootShark__Array {
        namespace {
            app::JumpShootShark__Array__Class* type_info_ref = nullptr;
        }
        app::JumpShootShark__Array__Class** type_info = &type_info_ref;
        inline app::JumpShootShark__Array__Class* get_class() {
            return il2cpp::get_class<app::JumpShootShark__Array__Class>(type_info, "", "JumpShootShark[]");
        }
        inline app::JumpShootShark__Array* create() {
            return il2cpp::create_object<app::JumpShootShark__Array>(get_class());
        }
    } // namespace JumpShootShark__Array
} // namespace app::classes::types

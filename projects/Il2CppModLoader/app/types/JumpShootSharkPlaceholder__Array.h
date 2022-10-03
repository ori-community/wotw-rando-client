#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace JumpShootSharkPlaceholder__Array {
        namespace {
            app::JumpShootSharkPlaceholder__Array__Class* type_info_ref = nullptr;
        }
        app::JumpShootSharkPlaceholder__Array__Class** type_info = &type_info_ref;
        inline app::JumpShootSharkPlaceholder__Array__Class* get_class() {
            return il2cpp::get_class<app::JumpShootSharkPlaceholder__Array__Class>(type_info, "", "JumpShootSharkPlaceholder[]");
        }
        inline app::JumpShootSharkPlaceholder__Array* create() {
            return il2cpp::create_object<app::JumpShootSharkPlaceholder__Array>(get_class());
        }
    } // namespace JumpShootSharkPlaceholder__Array
} // namespace app::classes::types

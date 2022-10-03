#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinStatusAnimatorDriver {
        namespace {
            app::SeinStatusAnimatorDriver__Class* type_info_ref = nullptr;
        }
        app::SeinStatusAnimatorDriver__Class** type_info = &type_info_ref;
        inline app::SeinStatusAnimatorDriver__Class* get_class() {
            return il2cpp::get_class<app::SeinStatusAnimatorDriver__Class>(type_info, "", "SeinStatusAnimatorDriver");
        }
        inline app::SeinStatusAnimatorDriver* create() {
            return il2cpp::create_object<app::SeinStatusAnimatorDriver>(get_class());
        }
    } // namespace SeinStatusAnimatorDriver
} // namespace app::classes::types

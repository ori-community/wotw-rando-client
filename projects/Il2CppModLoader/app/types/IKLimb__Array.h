#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IKLimb__Array {
        namespace {
            app::IKLimb__Array__Class* type_info_ref = nullptr;
        }
        app::IKLimb__Array__Class** type_info = &type_info_ref;
        inline app::IKLimb__Array__Class* get_class() {
            return il2cpp::get_class<app::IKLimb__Array__Class>(type_info, "Moon", "IKLimb[]");
        }
        inline app::IKLimb__Array* create() {
            return il2cpp::create_object<app::IKLimb__Array>(get_class());
        }
    } // namespace IKLimb__Array
} // namespace app::classes::types

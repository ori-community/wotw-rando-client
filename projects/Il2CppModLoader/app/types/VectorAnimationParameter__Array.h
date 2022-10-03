#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace VectorAnimationParameter__Array {
        namespace {
            app::VectorAnimationParameter__Array__Class* type_info_ref = nullptr;
        }
        app::VectorAnimationParameter__Array__Class** type_info = &type_info_ref;
        inline app::VectorAnimationParameter__Array__Class* get_class() {
            return il2cpp::get_class<app::VectorAnimationParameter__Array__Class>(type_info, "Moon", "VectorAnimationParameter[]");
        }
        inline app::VectorAnimationParameter__Array* create() {
            return il2cpp::create_object<app::VectorAnimationParameter__Array>(get_class());
        }
    } // namespace VectorAnimationParameter__Array
} // namespace app::classes::types

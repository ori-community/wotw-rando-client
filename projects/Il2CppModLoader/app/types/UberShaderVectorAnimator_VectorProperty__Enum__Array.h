#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberShaderVectorAnimator_VectorProperty__Enum__Array {
        namespace {
            app::UberShaderVectorAnimator_VectorProperty__Enum__Array__Class* type_info_ref = nullptr;
        }
        app::UberShaderVectorAnimator_VectorProperty__Enum__Array__Class** type_info = &type_info_ref;
        inline app::UberShaderVectorAnimator_VectorProperty__Enum__Array__Class* get_class() {
            return il2cpp::get_class<app::UberShaderVectorAnimator_VectorProperty__Enum__Array__Class>(type_info, "Moon.Timeline", "UberShaderVectorAnimator+VectorProperty[]");
        }
        inline app::UberShaderVectorAnimator_VectorProperty__Enum__Array* create() {
            return il2cpp::create_object<app::UberShaderVectorAnimator_VectorProperty__Enum__Array>(get_class());
        }
    } // namespace UberShaderVectorAnimator_VectorProperty__Enum__Array
} // namespace app::classes::types

#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberShaderAnimatorStrategyExperimental_VectorValue {
        namespace {
            app::UberShaderAnimatorStrategyExperimental_VectorValue__Class* type_info_ref = nullptr;
        }
        app::UberShaderAnimatorStrategyExperimental_VectorValue__Class** type_info = &type_info_ref;
        inline app::UberShaderAnimatorStrategyExperimental_VectorValue__Class* get_class() {
            return il2cpp::get_nested_class<app::UberShaderAnimatorStrategyExperimental_VectorValue__Class>(type_info, "Moon.Timeline", "UberShaderAnimatorStrategyExperimental", "VectorValue");
        }
        inline app::UberShaderAnimatorStrategyExperimental_VectorValue* create() {
            return il2cpp::create_object<app::UberShaderAnimatorStrategyExperimental_VectorValue>(get_class());
        }
        inline app::UberShaderAnimatorStrategyExperimental_VectorValue__Boxed* box(app::UberShaderAnimatorStrategyExperimental_VectorValue value) {
            return il2cpp::box_value<app::UberShaderAnimatorStrategyExperimental_VectorValue__Boxed>(get_class(), value);
        }
        inline app::UberShaderAnimatorStrategyExperimental_VectorValue__Array* create_array(int size) {
            return il2cpp::array_new<app::UberShaderAnimatorStrategyExperimental_VectorValue__Array>(get_class(), size);
        }
    } // namespace UberShaderAnimatorStrategyExperimental_VectorValue
} // namespace app::classes::types

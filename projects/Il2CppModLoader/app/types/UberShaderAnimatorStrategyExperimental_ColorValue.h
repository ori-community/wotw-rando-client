#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberShaderAnimatorStrategyExperimental_ColorValue {
        namespace {
            app::UberShaderAnimatorStrategyExperimental_ColorValue__Class* type_info_ref = nullptr;
        }
        app::UberShaderAnimatorStrategyExperimental_ColorValue__Class** type_info = &type_info_ref;
        inline app::UberShaderAnimatorStrategyExperimental_ColorValue__Class* get_class() {
            return il2cpp::get_nested_class<app::UberShaderAnimatorStrategyExperimental_ColorValue__Class>(type_info, "Moon.Timeline", "UberShaderAnimatorStrategyExperimental", "ColorValue");
        }
        inline app::UberShaderAnimatorStrategyExperimental_ColorValue* create() {
            return il2cpp::create_object<app::UberShaderAnimatorStrategyExperimental_ColorValue>(get_class());
        }
        inline app::UberShaderAnimatorStrategyExperimental_ColorValue__Boxed* box(app::UberShaderAnimatorStrategyExperimental_ColorValue value) {
            return il2cpp::box_value<app::UberShaderAnimatorStrategyExperimental_ColorValue__Boxed>(get_class(), value);
        }
        inline app::UberShaderAnimatorStrategyExperimental_ColorValue__Array* create_array(int size) {
            return il2cpp::array_new<app::UberShaderAnimatorStrategyExperimental_ColorValue__Array>(get_class(), size);
        }
        inline app::UberShaderAnimatorStrategyExperimental_ColorValue__Array* create_array(const std::vector<app::UberShaderAnimatorStrategyExperimental_ColorValue__Boxed>& items) {
            return il2cpp::array_new<app::UberShaderAnimatorStrategyExperimental_ColorValue__Array>(get_class(), items);
        }
    } // namespace UberShaderAnimatorStrategyExperimental_ColorValue
} // namespace app::classes::types

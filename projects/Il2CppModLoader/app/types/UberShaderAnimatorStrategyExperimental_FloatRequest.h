#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberShaderAnimatorStrategyExperimental_FloatRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UberShaderAnimatorStrategyExperimental_FloatRequest__Class** type_info;
        inline app::UberShaderAnimatorStrategyExperimental_FloatRequest__Class* get_class() {
            return il2cpp::get_nested_class<app::UberShaderAnimatorStrategyExperimental_FloatRequest__Class>(type_info, "Moon.Timeline", "UberShaderAnimatorStrategyExperimental", "FloatRequest");
        }
        inline app::UberShaderAnimatorStrategyExperimental_FloatRequest* create() {
            return il2cpp::create_object<app::UberShaderAnimatorStrategyExperimental_FloatRequest>(get_class());
        }
        inline app::UberShaderAnimatorStrategyExperimental_FloatRequest__Boxed* box(app::UberShaderAnimatorStrategyExperimental_FloatRequest value) {
            return il2cpp::box_value<app::UberShaderAnimatorStrategyExperimental_FloatRequest__Boxed>(get_class(), value);
        }
        inline app::UberShaderAnimatorStrategyExperimental_FloatRequest__Array* create_array(int size) {
            return il2cpp::array_new<app::UberShaderAnimatorStrategyExperimental_FloatRequest__Array>(get_class(), size);
        }
        inline app::UberShaderAnimatorStrategyExperimental_FloatRequest__Array* create_array(const std::vector<app::UberShaderAnimatorStrategyExperimental_FloatRequest__Boxed>& items) {
            return il2cpp::array_new<app::UberShaderAnimatorStrategyExperimental_FloatRequest__Array>(get_class(), items);
        }
    } // namespace UberShaderAnimatorStrategyExperimental_FloatRequest
} // namespace app::classes::types

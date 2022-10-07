#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberShaderAnimatorStrategyExperimental_VectorRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UberShaderAnimatorStrategyExperimental_VectorRequest__Class** type_info;
        inline app::UberShaderAnimatorStrategyExperimental_VectorRequest__Class* get_class() {
            return il2cpp::get_nested_class<app::UberShaderAnimatorStrategyExperimental_VectorRequest__Class>(type_info, "Moon.Timeline", "UberShaderAnimatorStrategyExperimental", "VectorRequest");
        }
        inline app::UberShaderAnimatorStrategyExperimental_VectorRequest* create() {
            return il2cpp::create_object<app::UberShaderAnimatorStrategyExperimental_VectorRequest>(get_class());
        }
        inline app::UberShaderAnimatorStrategyExperimental_VectorRequest__Boxed* box(app::UberShaderAnimatorStrategyExperimental_VectorRequest value) {
            return il2cpp::box_value<app::UberShaderAnimatorStrategyExperimental_VectorRequest__Boxed>(get_class(), value);
        }
        inline app::UberShaderAnimatorStrategyExperimental_VectorRequest__Array* create_array(int size) {
            return il2cpp::array_new<app::UberShaderAnimatorStrategyExperimental_VectorRequest__Array>(get_class(), size);
        }
        inline app::UberShaderAnimatorStrategyExperimental_VectorRequest__Array* create_array(const std::vector<app::UberShaderAnimatorStrategyExperimental_VectorRequest>& items) {
            return il2cpp::array_new<app::UberShaderAnimatorStrategyExperimental_VectorRequest__Array>(get_class(), items);
        }
    } // namespace UberShaderAnimatorStrategyExperimental_VectorRequest
} // namespace app::classes::types

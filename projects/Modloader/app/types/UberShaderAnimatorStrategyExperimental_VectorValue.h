#pragma once
#include <Modloader/app/structs/UberShaderAnimatorStrategyExperimental_VectorValue.h>
#include <Modloader/app/structs/UberShaderAnimatorStrategyExperimental_VectorValue__Array.h>
#include <Modloader/app/structs/UberShaderAnimatorStrategyExperimental_VectorValue__Boxed.h>
#include <Modloader/app/structs/UberShaderAnimatorStrategyExperimental_VectorValue__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberShaderAnimatorStrategyExperimental_VectorValue {
        inline app::UberShaderAnimatorStrategyExperimental_VectorValue__Class** type_info() {
            static app::UberShaderAnimatorStrategyExperimental_VectorValue__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberShaderAnimatorStrategyExperimental_VectorValue__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberShaderAnimatorStrategyExperimental_VectorValue__Class* get_class() {
            return il2cpp::get_nested_class<app::UberShaderAnimatorStrategyExperimental_VectorValue__Class>(type_info(), "Moon.Timeline", "UberShaderAnimatorStrategyExperimental", "VectorValue");
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
        inline app::UberShaderAnimatorStrategyExperimental_VectorValue__Array* create_array(const std::vector<app::UberShaderAnimatorStrategyExperimental_VectorValue>& items) {
            return il2cpp::array_new<app::UberShaderAnimatorStrategyExperimental_VectorValue__Array>(get_class(), items);
        }
    } // namespace UberShaderAnimatorStrategyExperimental_VectorValue
} // namespace app::classes::types

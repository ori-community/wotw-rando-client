#pragma once
#include <Modloader/app/structs/UberShaderAnimatorStrategyExperimental_VectorValue__Array.h>
#include <Modloader/app/structs/UberShaderAnimatorStrategyExperimental_VectorValue__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberShaderAnimatorStrategyExperimental_VectorValue__Array {
        inline app::UberShaderAnimatorStrategyExperimental_VectorValue__Array__Class** type_info() {
            static app::UberShaderAnimatorStrategyExperimental_VectorValue__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UberShaderAnimatorStrategyExperimental_VectorValue__Array__Class**)(modloader::win::memory::resolve_rva(0x04771838));
            }
            return cache;
        }
        inline app::UberShaderAnimatorStrategyExperimental_VectorValue__Array__Class* get_class() {
            return il2cpp::get_class<app::UberShaderAnimatorStrategyExperimental_VectorValue__Array__Class>(type_info(), "Moon.Timeline", "UberShaderAnimatorStrategyExperimental+VectorValue[]");
        }
        inline app::UberShaderAnimatorStrategyExperimental_VectorValue__Array* create() {
            return il2cpp::create_object<app::UberShaderAnimatorStrategyExperimental_VectorValue__Array>(get_class());
        }
    } // namespace UberShaderAnimatorStrategyExperimental_VectorValue__Array
} // namespace app::classes::types

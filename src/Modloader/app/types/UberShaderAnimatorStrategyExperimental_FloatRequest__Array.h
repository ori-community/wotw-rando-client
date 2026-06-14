#pragma once
#include <Modloader/app/structs/UberShaderAnimatorStrategyExperimental_FloatRequest__Array.h>
#include <Modloader/app/structs/UberShaderAnimatorStrategyExperimental_FloatRequest__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberShaderAnimatorStrategyExperimental_FloatRequest__Array {
        inline app::UberShaderAnimatorStrategyExperimental_FloatRequest__Array__Class** type_info() {
            static app::UberShaderAnimatorStrategyExperimental_FloatRequest__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberShaderAnimatorStrategyExperimental_FloatRequest__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberShaderAnimatorStrategyExperimental_FloatRequest__Array__Class* get_class() {
            return il2cpp::get_class<app::UberShaderAnimatorStrategyExperimental_FloatRequest__Array__Class>(type_info(), "Moon.Timeline", "UberShaderAnimatorStrategyExperimental+FloatRequest[]");
        }
        inline app::UberShaderAnimatorStrategyExperimental_FloatRequest__Array* create() {
            return il2cpp::create_object<app::UberShaderAnimatorStrategyExperimental_FloatRequest__Array>(get_class());
        }
    } // namespace UberShaderAnimatorStrategyExperimental_FloatRequest__Array
} // namespace app::classes::types

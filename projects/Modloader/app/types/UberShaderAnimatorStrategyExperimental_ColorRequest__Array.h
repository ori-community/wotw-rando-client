#pragma once
#include <Modloader/app/structs/UberShaderAnimatorStrategyExperimental_ColorRequest__Array.h>
#include <Modloader/app/structs/UberShaderAnimatorStrategyExperimental_ColorRequest__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberShaderAnimatorStrategyExperimental_ColorRequest__Array {
        inline app::UberShaderAnimatorStrategyExperimental_ColorRequest__Array__Class** type_info() {
            static app::UberShaderAnimatorStrategyExperimental_ColorRequest__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberShaderAnimatorStrategyExperimental_ColorRequest__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberShaderAnimatorStrategyExperimental_ColorRequest__Array__Class* get_class() {
            return il2cpp::get_class<app::UberShaderAnimatorStrategyExperimental_ColorRequest__Array__Class>(type_info(), "Moon.Timeline", "UberShaderAnimatorStrategyExperimental+ColorRequest[]");
        }
        inline app::UberShaderAnimatorStrategyExperimental_ColorRequest__Array* create() {
            return il2cpp::create_object<app::UberShaderAnimatorStrategyExperimental_ColorRequest__Array>(get_class());
        }
    } // namespace UberShaderAnimatorStrategyExperimental_ColorRequest__Array
} // namespace app::classes::types

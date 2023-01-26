#pragma once
#include <Modloader/app/structs/UberShaderAnimatorStrategyExperimental_ColorValue__Array.h>
#include <Modloader/app/structs/UberShaderAnimatorStrategyExperimental_ColorValue__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberShaderAnimatorStrategyExperimental_ColorValue__Array {
        inline app::UberShaderAnimatorStrategyExperimental_ColorValue__Array__Class** type_info() {
            static app::UberShaderAnimatorStrategyExperimental_ColorValue__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UberShaderAnimatorStrategyExperimental_ColorValue__Array__Class**)(modloader::win::memory::resolve_rva(0x04735E78));
            }
            return cache;
        }
        inline app::UberShaderAnimatorStrategyExperimental_ColorValue__Array__Class* get_class() {
            return il2cpp::get_class<app::UberShaderAnimatorStrategyExperimental_ColorValue__Array__Class>(type_info(), "Moon.Timeline", "UberShaderAnimatorStrategyExperimental+ColorValue[]");
        }
        inline app::UberShaderAnimatorStrategyExperimental_ColorValue__Array* create() {
            return il2cpp::create_object<app::UberShaderAnimatorStrategyExperimental_ColorValue__Array>(get_class());
        }
    } // namespace UberShaderAnimatorStrategyExperimental_ColorValue__Array
} // namespace app::classes::types

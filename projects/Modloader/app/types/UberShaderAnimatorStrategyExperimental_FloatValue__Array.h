#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberShaderAnimatorStrategyExperimental_FloatValue__Array {
        inline app::UberShaderAnimatorStrategyExperimental_FloatValue__Array__Class** type_info = (app::UberShaderAnimatorStrategyExperimental_FloatValue__Array__Class**)(modloader::win::memory::resolve_rva(0x0476DAB0));
        inline app::UberShaderAnimatorStrategyExperimental_FloatValue__Array__Class* get_class() {
            return il2cpp::get_class<app::UberShaderAnimatorStrategyExperimental_FloatValue__Array__Class>(type_info, "Moon.Timeline", "UberShaderAnimatorStrategyExperimental+FloatValue[]");
        }
        inline app::UberShaderAnimatorStrategyExperimental_FloatValue__Array* create() {
            return il2cpp::create_object<app::UberShaderAnimatorStrategyExperimental_FloatValue__Array>(get_class());
        }
    } // namespace UberShaderAnimatorStrategyExperimental_FloatValue__Array
} // namespace app::classes::types

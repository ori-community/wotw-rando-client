#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberShaderAnimatorStrategyExperimental_ColorValue__Array {
        inline app::UberShaderAnimatorStrategyExperimental_ColorValue__Array__Class** type_info = (app::UberShaderAnimatorStrategyExperimental_ColorValue__Array__Class**)(modloader::win::memory::resolve_rva(0x04735E78));
        inline app::UberShaderAnimatorStrategyExperimental_ColorValue__Array__Class* get_class() {
            return il2cpp::get_class<app::UberShaderAnimatorStrategyExperimental_ColorValue__Array__Class>(type_info, "Moon.Timeline", "UberShaderAnimatorStrategyExperimental+ColorValue[]");
        }
        inline app::UberShaderAnimatorStrategyExperimental_ColorValue__Array* create() {
            return il2cpp::create_object<app::UberShaderAnimatorStrategyExperimental_ColorValue__Array>(get_class());
        }
    } // namespace UberShaderAnimatorStrategyExperimental_ColorValue__Array
} // namespace app::classes::types

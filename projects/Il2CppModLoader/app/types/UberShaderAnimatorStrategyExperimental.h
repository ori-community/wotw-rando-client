#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberShaderAnimatorStrategyExperimental {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UberShaderAnimatorStrategyExperimental__Class** type_info;
        inline app::UberShaderAnimatorStrategyExperimental__Class* get_class() {
            return il2cpp::get_class<app::UberShaderAnimatorStrategyExperimental__Class>(type_info, "Moon.Timeline", "UberShaderAnimatorStrategyExperimental");
        }
        inline app::UberShaderAnimatorStrategyExperimental* create() {
            return il2cpp::create_object<app::UberShaderAnimatorStrategyExperimental>(get_class());
        }
    } // namespace UberShaderAnimatorStrategyExperimental
} // namespace app::classes::types

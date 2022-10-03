#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberShaderAnimatorStrategyStandard {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UberShaderAnimatorStrategyStandard__Class** type_info;
        inline app::UberShaderAnimatorStrategyStandard__Class* get_class() {
            return il2cpp::get_class<app::UberShaderAnimatorStrategyStandard__Class>(type_info, "Moon.Timeline", "UberShaderAnimatorStrategyStandard");
        }
        inline app::UberShaderAnimatorStrategyStandard* create() {
            return il2cpp::create_object<app::UberShaderAnimatorStrategyStandard>(get_class());
        }
    } // namespace UberShaderAnimatorStrategyStandard
} // namespace app::classes::types

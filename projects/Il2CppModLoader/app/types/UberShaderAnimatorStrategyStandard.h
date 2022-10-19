#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberShaderAnimatorStrategyStandard {
        inline app::UberShaderAnimatorStrategyStandard__Class** type_info = (app::UberShaderAnimatorStrategyStandard__Class**)(modloader::win::memory::resolve_rva(0x0477B8D8));
        inline app::UberShaderAnimatorStrategyStandard__Class* get_class() {
            return il2cpp::get_class<app::UberShaderAnimatorStrategyStandard__Class>(type_info, "Moon.Timeline", "UberShaderAnimatorStrategyStandard");
        }
        inline app::UberShaderAnimatorStrategyStandard* create() {
            return il2cpp::create_object<app::UberShaderAnimatorStrategyStandard>(get_class());
        }
    } // namespace UberShaderAnimatorStrategyStandard
} // namespace app::classes::types

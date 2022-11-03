#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberShaderAnimatorStrategyExperimental {
        inline app::UberShaderAnimatorStrategyExperimental__Class** type_info = (app::UberShaderAnimatorStrategyExperimental__Class**)(modloader::win::memory::resolve_rva(0x04718488));
        inline app::UberShaderAnimatorStrategyExperimental__Class* get_class() {
            return il2cpp::get_class<app::UberShaderAnimatorStrategyExperimental__Class>(type_info, "Moon.Timeline", "UberShaderAnimatorStrategyExperimental");
        }
        inline app::UberShaderAnimatorStrategyExperimental* create() {
            return il2cpp::create_object<app::UberShaderAnimatorStrategyExperimental>(get_class());
        }
    } // namespace UberShaderAnimatorStrategyExperimental
} // namespace app::classes::types

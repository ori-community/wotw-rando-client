#pragma once
#include <Modloader/app/structs/UberShaderAnimatorStrategyExperimental.h>
#include <Modloader/app/structs/UberShaderAnimatorStrategyExperimental__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberShaderAnimatorStrategyExperimental {
        inline app::UberShaderAnimatorStrategyExperimental__Class** type_info() {
            static app::UberShaderAnimatorStrategyExperimental__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UberShaderAnimatorStrategyExperimental__Class**)(modloader::win::memory::resolve_rva(0x04718488));
            }
            return cache;
        }
        inline app::UberShaderAnimatorStrategyExperimental__Class* get_class() {
            return il2cpp::get_class<app::UberShaderAnimatorStrategyExperimental__Class>(type_info(), "Moon.Timeline", "UberShaderAnimatorStrategyExperimental");
        }
        inline app::UberShaderAnimatorStrategyExperimental* create() {
            return il2cpp::create_object<app::UberShaderAnimatorStrategyExperimental>(get_class());
        }
    } // namespace UberShaderAnimatorStrategyExperimental
} // namespace app::classes::types

#pragma once
#include <Modloader/app/structs/UberShaderAnimatorStrategyStandard.h>
#include <Modloader/app/structs/UberShaderAnimatorStrategyStandard__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberShaderAnimatorStrategyStandard {
        inline app::UberShaderAnimatorStrategyStandard__Class** type_info() {
            static app::UberShaderAnimatorStrategyStandard__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UberShaderAnimatorStrategyStandard__Class**)(modloader::win::memory::resolve_rva(0x0477B8D8));
            }
            return cache;
        }
        inline app::UberShaderAnimatorStrategyStandard__Class* get_class() {
            return il2cpp::get_class<app::UberShaderAnimatorStrategyStandard__Class>(type_info(), "Moon.Timeline", "UberShaderAnimatorStrategyStandard");
        }
        inline app::UberShaderAnimatorStrategyStandard* create() {
            return il2cpp::create_object<app::UberShaderAnimatorStrategyStandard>(get_class());
        }
    } // namespace UberShaderAnimatorStrategyStandard
} // namespace app::classes::types

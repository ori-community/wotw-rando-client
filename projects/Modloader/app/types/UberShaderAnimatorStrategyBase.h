#pragma once
#include <Modloader/app/structs/UberShaderAnimatorStrategyBase.h>
#include <Modloader/app/structs/UberShaderAnimatorStrategyBase__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberShaderAnimatorStrategyBase {
        inline app::UberShaderAnimatorStrategyBase__Class** type_info() {
            static app::UberShaderAnimatorStrategyBase__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberShaderAnimatorStrategyBase__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberShaderAnimatorStrategyBase__Class* get_class() {
            return il2cpp::get_class<app::UberShaderAnimatorStrategyBase__Class>(type_info(), "Moon.Timeline", "UberShaderAnimatorStrategyBase");
        }
        inline app::UberShaderAnimatorStrategyBase* create() {
            return il2cpp::create_object<app::UberShaderAnimatorStrategyBase>(get_class());
        }
    } // namespace UberShaderAnimatorStrategyBase
} // namespace app::classes::types

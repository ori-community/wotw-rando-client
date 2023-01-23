#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UberShaderAnimatorStrategyBase__Class.h>
#include <Modloader/app/structs/UberShaderAnimatorStrategyBase.h>

namespace app::classes::types {
    namespace UberShaderAnimatorStrategyBase {
        namespace {
            inline app::UberShaderAnimatorStrategyBase__Class* type_info_ref = nullptr;
        }
        inline app::UberShaderAnimatorStrategyBase__Class** type_info = &type_info_ref;
        inline app::UberShaderAnimatorStrategyBase__Class* get_class() {
            return il2cpp::get_class<app::UberShaderAnimatorStrategyBase__Class>(type_info, "Moon.Timeline", "UberShaderAnimatorStrategyBase");
        }
        inline app::UberShaderAnimatorStrategyBase* create() {
            return il2cpp::create_object<app::UberShaderAnimatorStrategyBase>(get_class());
        }
    } // namespace UberShaderAnimatorStrategyBase
} // namespace app::classes::types

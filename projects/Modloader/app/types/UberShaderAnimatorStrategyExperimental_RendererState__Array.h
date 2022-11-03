#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberShaderAnimatorStrategyExperimental_RendererState__Array {
        namespace {
            inline app::UberShaderAnimatorStrategyExperimental_RendererState__Array__Class* type_info_ref = nullptr;
        }
        inline app::UberShaderAnimatorStrategyExperimental_RendererState__Array__Class** type_info = &type_info_ref;
        inline app::UberShaderAnimatorStrategyExperimental_RendererState__Array__Class* get_class() {
            return il2cpp::get_class<app::UberShaderAnimatorStrategyExperimental_RendererState__Array__Class>(type_info, "Moon.Timeline", "UberShaderAnimatorStrategyExperimental+RendererState[]");
        }
        inline app::UberShaderAnimatorStrategyExperimental_RendererState__Array* create() {
            return il2cpp::create_object<app::UberShaderAnimatorStrategyExperimental_RendererState__Array>(get_class());
        }
    } // namespace UberShaderAnimatorStrategyExperimental_RendererState__Array
} // namespace app::classes::types

#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberShaderAnimatorStrategyExperimental_RendererState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UberShaderAnimatorStrategyExperimental_RendererState__Class** type_info;
        inline app::UberShaderAnimatorStrategyExperimental_RendererState__Class* get_class() {
            return il2cpp::get_nested_class<app::UberShaderAnimatorStrategyExperimental_RendererState__Class>(type_info, "Moon.Timeline", "UberShaderAnimatorStrategyExperimental", "RendererState");
        }
        inline app::UberShaderAnimatorStrategyExperimental_RendererState* create() {
            return il2cpp::create_object<app::UberShaderAnimatorStrategyExperimental_RendererState>(get_class());
        }
        inline app::UberShaderAnimatorStrategyExperimental_RendererState__Array* create_array(int size) {
            return il2cpp::array_new<app::UberShaderAnimatorStrategyExperimental_RendererState__Array>(get_class(), size);
        }
    } // namespace UberShaderAnimatorStrategyExperimental_RendererState
} // namespace app::classes::types

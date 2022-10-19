#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberShaderAnimatorStrategyStandard_RendererState__Array {
        namespace {
            inline app::UberShaderAnimatorStrategyStandard_RendererState__Array__Class* type_info_ref = nullptr;
        }
        inline app::UberShaderAnimatorStrategyStandard_RendererState__Array__Class** type_info = &type_info_ref;
        inline app::UberShaderAnimatorStrategyStandard_RendererState__Array__Class* get_class() {
            return il2cpp::get_class<app::UberShaderAnimatorStrategyStandard_RendererState__Array__Class>(type_info, "Moon.Timeline", "UberShaderAnimatorStrategyStandard+RendererState[]");
        }
        inline app::UberShaderAnimatorStrategyStandard_RendererState__Array* create() {
            return il2cpp::create_object<app::UberShaderAnimatorStrategyStandard_RendererState__Array>(get_class());
        }
    } // namespace UberShaderAnimatorStrategyStandard_RendererState__Array
} // namespace app::classes::types

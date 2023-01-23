#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UberShaderAnimatorStrategyExperimental_RendererState__Class.h>
#include <Modloader/app/structs/UberShaderAnimatorStrategyExperimental_RendererState.h>
#include <Modloader/app/structs/UberShaderAnimatorStrategyExperimental_RendererState__Array.h>

namespace app::classes::types {
    namespace UberShaderAnimatorStrategyExperimental_RendererState {
        inline app::UberShaderAnimatorStrategyExperimental_RendererState__Class** type_info = (app::UberShaderAnimatorStrategyExperimental_RendererState__Class**)(modloader::win::memory::resolve_rva(0x047283D8));
        inline app::UberShaderAnimatorStrategyExperimental_RendererState__Class* get_class() {
            return il2cpp::get_nested_class<app::UberShaderAnimatorStrategyExperimental_RendererState__Class>(type_info, "Moon.Timeline", "UberShaderAnimatorStrategyExperimental", "RendererState");
        }
        inline app::UberShaderAnimatorStrategyExperimental_RendererState* create() {
            return il2cpp::create_object<app::UberShaderAnimatorStrategyExperimental_RendererState>(get_class());
        }
        inline app::UberShaderAnimatorStrategyExperimental_RendererState__Array* create_array(int size) {
            return il2cpp::array_new<app::UberShaderAnimatorStrategyExperimental_RendererState__Array>(get_class(), size);
        }
        inline app::UberShaderAnimatorStrategyExperimental_RendererState__Array* create_array(const std::vector<app::UberShaderAnimatorStrategyExperimental_RendererState*>& items) {
            return il2cpp::array_new<app::UberShaderAnimatorStrategyExperimental_RendererState__Array>(get_class(), items);
        }
    } // namespace UberShaderAnimatorStrategyExperimental_RendererState
} // namespace app::classes::types

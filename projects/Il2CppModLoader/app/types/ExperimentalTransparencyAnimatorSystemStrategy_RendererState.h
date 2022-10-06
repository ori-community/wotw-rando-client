#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ExperimentalTransparencyAnimatorSystemStrategy_RendererState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ExperimentalTransparencyAnimatorSystemStrategy_RendererState__Class** type_info;
        inline app::ExperimentalTransparencyAnimatorSystemStrategy_RendererState__Class* get_class() {
            return il2cpp::get_nested_class<app::ExperimentalTransparencyAnimatorSystemStrategy_RendererState__Class>(type_info, "Moon.Timeline", "ExperimentalTransparencyAnimatorSystemStrategy", "RendererState");
        }
        inline app::ExperimentalTransparencyAnimatorSystemStrategy_RendererState* create() {
            return il2cpp::create_object<app::ExperimentalTransparencyAnimatorSystemStrategy_RendererState>(get_class());
        }
        inline app::ExperimentalTransparencyAnimatorSystemStrategy_RendererState__Array* create_array(int size) {
            return il2cpp::array_new<app::ExperimentalTransparencyAnimatorSystemStrategy_RendererState__Array>(get_class(), size);
        }
        inline app::ExperimentalTransparencyAnimatorSystemStrategy_RendererState__Array* create_array(const std::vector<app::ExperimentalTransparencyAnimatorSystemStrategy_RendererState*>& items) {
            return il2cpp::array_new<app::ExperimentalTransparencyAnimatorSystemStrategy_RendererState__Array>(get_class(), items);
        }
    } // namespace ExperimentalTransparencyAnimatorSystemStrategy_RendererState
} // namespace app::classes::types

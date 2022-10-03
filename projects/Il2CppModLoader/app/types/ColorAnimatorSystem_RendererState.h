#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ColorAnimatorSystem_RendererState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ColorAnimatorSystem_RendererState__Class** type_info;
        inline app::ColorAnimatorSystem_RendererState__Class* get_class() {
            return il2cpp::get_nested_class<app::ColorAnimatorSystem_RendererState__Class>(type_info, "Moon.Timeline", "ColorAnimatorSystem", "RendererState");
        }
        inline app::ColorAnimatorSystem_RendererState* create() {
            return il2cpp::create_object<app::ColorAnimatorSystem_RendererState>(get_class());
        }
        inline app::ColorAnimatorSystem_RendererState__Array* create_array(int size) {
            return il2cpp::array_new<app::ColorAnimatorSystem_RendererState__Array>(get_class(), size);
        }
    } // namespace ColorAnimatorSystem_RendererState
} // namespace app::classes::types

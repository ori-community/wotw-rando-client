#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ColorAnimatorSystem_RendererState__Array {
        namespace {
            app::ColorAnimatorSystem_RendererState__Array__Class* type_info_ref = nullptr;
        }
        app::ColorAnimatorSystem_RendererState__Array__Class** type_info = &type_info_ref;
        inline app::ColorAnimatorSystem_RendererState__Array__Class* get_class() {
            return il2cpp::get_class<app::ColorAnimatorSystem_RendererState__Array__Class>(type_info, "Moon.Timeline", "ColorAnimatorSystem+RendererState[]");
        }
        inline app::ColorAnimatorSystem_RendererState__Array* create() {
            return il2cpp::create_object<app::ColorAnimatorSystem_RendererState__Array>(get_class());
        }
    } // namespace ColorAnimatorSystem_RendererState__Array
} // namespace app::classes::types

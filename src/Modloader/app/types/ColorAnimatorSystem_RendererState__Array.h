#pragma once
#include <Modloader/app/structs/ColorAnimatorSystem_RendererState__Array.h>
#include <Modloader/app/structs/ColorAnimatorSystem_RendererState__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ColorAnimatorSystem_RendererState__Array {
        inline app::ColorAnimatorSystem_RendererState__Array__Class** type_info() {
            static app::ColorAnimatorSystem_RendererState__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ColorAnimatorSystem_RendererState__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ColorAnimatorSystem_RendererState__Array__Class* get_class() {
            return il2cpp::get_class<app::ColorAnimatorSystem_RendererState__Array__Class>(type_info(), "Moon.Timeline", "ColorAnimatorSystem+RendererState[]");
        }
        inline app::ColorAnimatorSystem_RendererState__Array* create() {
            return il2cpp::create_object<app::ColorAnimatorSystem_RendererState__Array>(get_class());
        }
    } // namespace ColorAnimatorSystem_RendererState__Array
} // namespace app::classes::types

#pragma once
#include <Modloader/app/structs/ExperimentalTransparencyAnimatorSystemStrategy_RendererState__Array.h>
#include <Modloader/app/structs/ExperimentalTransparencyAnimatorSystemStrategy_RendererState__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ExperimentalTransparencyAnimatorSystemStrategy_RendererState__Array {
        inline app::ExperimentalTransparencyAnimatorSystemStrategy_RendererState__Array__Class** type_info() {
            static app::ExperimentalTransparencyAnimatorSystemStrategy_RendererState__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ExperimentalTransparencyAnimatorSystemStrategy_RendererState__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ExperimentalTransparencyAnimatorSystemStrategy_RendererState__Array__Class* get_class() {
            return il2cpp::get_class<app::ExperimentalTransparencyAnimatorSystemStrategy_RendererState__Array__Class>(type_info(), "Moon.Timeline", "ExperimentalTransparencyAnimatorSystemStrategy+RendererState[]");
        }
        inline app::ExperimentalTransparencyAnimatorSystemStrategy_RendererState__Array* create() {
            return il2cpp::create_object<app::ExperimentalTransparencyAnimatorSystemStrategy_RendererState__Array>(get_class());
        }
    } // namespace ExperimentalTransparencyAnimatorSystemStrategy_RendererState__Array
} // namespace app::classes::types

#pragma once
#include <Modloader/app/structs/TransparencyAnimatorSystemStrategy_RendererState__Array.h>
#include <Modloader/app/structs/TransparencyAnimatorSystemStrategy_RendererState__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TransparencyAnimatorSystemStrategy_RendererState__Array {
        inline app::TransparencyAnimatorSystemStrategy_RendererState__Array__Class** type_info() {
            static app::TransparencyAnimatorSystemStrategy_RendererState__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TransparencyAnimatorSystemStrategy_RendererState__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TransparencyAnimatorSystemStrategy_RendererState__Array__Class* get_class() {
            return il2cpp::get_class<app::TransparencyAnimatorSystemStrategy_RendererState__Array__Class>(type_info(), "Moon.Timeline", "TransparencyAnimatorSystemStrategy+RendererState[]");
        }
        inline app::TransparencyAnimatorSystemStrategy_RendererState__Array* create() {
            return il2cpp::create_object<app::TransparencyAnimatorSystemStrategy_RendererState__Array>(get_class());
        }
    } // namespace TransparencyAnimatorSystemStrategy_RendererState__Array
} // namespace app::classes::types

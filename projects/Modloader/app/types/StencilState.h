#pragma once
#include <Modloader/app/structs/StencilState.h>
#include <Modloader/app/structs/StencilState__Boxed.h>
#include <Modloader/app/structs/StencilState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StencilState {
        inline app::StencilState__Class** type_info() {
            static app::StencilState__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::StencilState__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::StencilState__Class* get_class() {
            return il2cpp::get_class<app::StencilState__Class>(type_info(), "UnityEngine.Experimental.Rendering", "StencilState");
        }
        inline app::StencilState* create() {
            return il2cpp::create_object<app::StencilState>(get_class());
        }
        inline app::StencilState__Boxed* box(app::StencilState value) {
            return il2cpp::box_value<app::StencilState__Boxed>(get_class(), value);
        }
    } // namespace StencilState
} // namespace app::classes::types

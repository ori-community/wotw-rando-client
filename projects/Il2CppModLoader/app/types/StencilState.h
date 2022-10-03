#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StencilState {
        namespace {
            app::StencilState__Class* type_info_ref = nullptr;
        }
        app::StencilState__Class** type_info = &type_info_ref;
        inline app::StencilState__Class* get_class() {
            return il2cpp::get_class<app::StencilState__Class>(type_info, "UnityEngine.Experimental.Rendering", "StencilState");
        }
        inline app::StencilState* create() {
            return il2cpp::create_object<app::StencilState>(get_class());
        }
        inline app::StencilState__Boxed* box(app::StencilState value) {
            return il2cpp::box_value<app::StencilState__Boxed>(get_class(), value);
        }
    } // namespace StencilState
} // namespace app::classes::types

#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BlendState {
        namespace {
            app::BlendState__Class* type_info_ref = nullptr;
        }
        app::BlendState__Class** type_info = &type_info_ref;
        inline app::BlendState__Class* get_class() {
            return il2cpp::get_class<app::BlendState__Class>(type_info, "UnityEngine.Experimental.Rendering", "BlendState");
        }
        inline app::BlendState* create() {
            return il2cpp::create_object<app::BlendState>(get_class());
        }
        inline app::BlendState__Boxed* box(app::BlendState value) {
            return il2cpp::box_value<app::BlendState__Boxed>(get_class(), value);
        }
    } // namespace BlendState
} // namespace app::classes::types

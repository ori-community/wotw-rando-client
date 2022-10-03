#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DepthState {
        namespace {
            app::DepthState__Class* type_info_ref = nullptr;
        }
        app::DepthState__Class** type_info = &type_info_ref;
        inline app::DepthState__Class* get_class() {
            return il2cpp::get_class<app::DepthState__Class>(type_info, "UnityEngine.Experimental.Rendering", "DepthState");
        }
        inline app::DepthState* create() {
            return il2cpp::create_object<app::DepthState>(get_class());
        }
        inline app::DepthState__Boxed* box(app::DepthState value) {
            return il2cpp::box_value<app::DepthState__Boxed>(get_class(), value);
        }
    } // namespace DepthState
} // namespace app::classes::types

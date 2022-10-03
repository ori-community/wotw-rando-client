#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ScriptableRenderContext {
        namespace {
            app::ScriptableRenderContext__Class* type_info_ref = nullptr;
        }
        app::ScriptableRenderContext__Class** type_info = &type_info_ref;
        inline app::ScriptableRenderContext__Class* get_class() {
            return il2cpp::get_class<app::ScriptableRenderContext__Class>(type_info, "UnityEngine.Experimental.Rendering", "ScriptableRenderContext");
        }
        inline app::ScriptableRenderContext* create() {
            return il2cpp::create_object<app::ScriptableRenderContext>(get_class());
        }
        inline app::ScriptableRenderContext__Boxed* box(app::ScriptableRenderContext value) {
            return il2cpp::box_value<app::ScriptableRenderContext__Boxed>(get_class(), value);
        }
    } // namespace ScriptableRenderContext
} // namespace app::classes::types

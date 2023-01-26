#pragma once
#include <Modloader/app/structs/ScriptableRenderContext.h>
#include <Modloader/app/structs/ScriptableRenderContext__Boxed.h>
#include <Modloader/app/structs/ScriptableRenderContext__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ScriptableRenderContext {
        inline app::ScriptableRenderContext__Class** type_info() {
            static app::ScriptableRenderContext__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ScriptableRenderContext__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ScriptableRenderContext__Class* get_class() {
            return il2cpp::get_class<app::ScriptableRenderContext__Class>(type_info(), "UnityEngine.Experimental.Rendering", "ScriptableRenderContext");
        }
        inline app::ScriptableRenderContext* create() {
            return il2cpp::create_object<app::ScriptableRenderContext>(get_class());
        }
        inline app::ScriptableRenderContext__Boxed* box(app::ScriptableRenderContext value) {
            return il2cpp::box_value<app::ScriptableRenderContext__Boxed>(get_class(), value);
        }
    } // namespace ScriptableRenderContext
} // namespace app::classes::types

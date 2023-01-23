#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ScriptableRenderContext__Class.h>
#include <Modloader/app/structs/ScriptableRenderContext.h>
#include <Modloader/app/structs/ScriptableRenderContext__Boxed.h>

namespace app::classes::types {
    namespace ScriptableRenderContext {
        namespace {
            inline app::ScriptableRenderContext__Class* type_info_ref = nullptr;
        }
        inline app::ScriptableRenderContext__Class** type_info = &type_info_ref;
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

#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RenderQueueRange {
        namespace {
            app::RenderQueueRange__Class* type_info_ref = nullptr;
        }
        app::RenderQueueRange__Class** type_info = &type_info_ref;
        inline app::RenderQueueRange__Class* get_class() {
            return il2cpp::get_class<app::RenderQueueRange__Class>(type_info, "UnityEngine.Experimental.Rendering", "RenderQueueRange");
        }
        inline app::RenderQueueRange* create() {
            return il2cpp::create_object<app::RenderQueueRange>(get_class());
        }
        inline app::RenderQueueRange__Boxed* box(app::RenderQueueRange value) {
            return il2cpp::box_value<app::RenderQueueRange__Boxed>(get_class(), value);
        }
    } // namespace RenderQueueRange
} // namespace app::classes::types

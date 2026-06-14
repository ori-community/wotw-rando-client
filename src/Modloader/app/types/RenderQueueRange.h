#pragma once
#include <Modloader/app/structs/RenderQueueRange.h>
#include <Modloader/app/structs/RenderQueueRange__Boxed.h>
#include <Modloader/app/structs/RenderQueueRange__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RenderQueueRange {
        inline app::RenderQueueRange__Class** type_info() {
            static app::RenderQueueRange__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RenderQueueRange__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RenderQueueRange__Class* get_class() {
            return il2cpp::get_class<app::RenderQueueRange__Class>(type_info(), "UnityEngine.Experimental.Rendering", "RenderQueueRange");
        }
        inline app::RenderQueueRange* create() {
            return il2cpp::create_object<app::RenderQueueRange>(get_class());
        }
        inline app::RenderQueueRange__Boxed* box(app::RenderQueueRange value) {
            return il2cpp::box_value<app::RenderQueueRange__Boxed>(get_class(), value);
        }
    } // namespace RenderQueueRange
} // namespace app::classes::types

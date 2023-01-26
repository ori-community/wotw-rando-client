#pragma once
#include <Modloader/app/structs/IRenderPipeline__Array.h>
#include <Modloader/app/structs/IRenderPipeline__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IRenderPipeline__Array {
        inline app::IRenderPipeline__Array__Class** type_info() {
            static app::IRenderPipeline__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IRenderPipeline__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IRenderPipeline__Array__Class* get_class() {
            return il2cpp::get_class<app::IRenderPipeline__Array__Class>(type_info(), "UnityEngine.Experimental.Rendering", "IRenderPipeline[]");
        }
        inline app::IRenderPipeline__Array* create() {
            return il2cpp::create_object<app::IRenderPipeline__Array>(get_class());
        }
    } // namespace IRenderPipeline__Array
} // namespace app::classes::types

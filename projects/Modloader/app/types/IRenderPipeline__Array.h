#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IRenderPipeline__Array {
        namespace {
            inline app::IRenderPipeline__Array__Class* type_info_ref = nullptr;
        }
        inline app::IRenderPipeline__Array__Class** type_info = &type_info_ref;
        inline app::IRenderPipeline__Array__Class* get_class() {
            return il2cpp::get_class<app::IRenderPipeline__Array__Class>(type_info, "UnityEngine.Experimental.Rendering", "IRenderPipeline[]");
        }
        inline app::IRenderPipeline__Array* create() {
            return il2cpp::create_object<app::IRenderPipeline__Array>(get_class());
        }
    } // namespace IRenderPipeline__Array
} // namespace app::classes::types

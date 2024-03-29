#pragma once
#include <Modloader/app/structs/IRenderPipeline.h>
#include <Modloader/app/structs/IRenderPipeline__Array.h>
#include <Modloader/app/structs/IRenderPipeline__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IRenderPipeline {
        inline app::IRenderPipeline__Class** type_info() {
            static app::IRenderPipeline__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IRenderPipeline__Class**)(modloader::win::memory::resolve_rva(0x0477A948));
            }
            return cache;
        }
        inline app::IRenderPipeline__Class* get_class() {
            return il2cpp::get_class<app::IRenderPipeline__Class>(type_info(), "UnityEngine.Experimental.Rendering", "IRenderPipeline");
        }
        inline app::IRenderPipeline__Array* create_array(int size) {
            return il2cpp::array_new<app::IRenderPipeline__Array>(get_class(), size);
        }
        inline app::IRenderPipeline__Array* create_array(const std::vector<app::IRenderPipeline*>& items) {
            return il2cpp::array_new<app::IRenderPipeline__Array>(get_class(), items);
        }
    } // namespace IRenderPipeline
} // namespace app::classes::types

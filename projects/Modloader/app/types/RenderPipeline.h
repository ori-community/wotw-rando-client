#pragma once
#include <Modloader/app/structs/RenderPipeline.h>
#include <Modloader/app/structs/RenderPipeline__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RenderPipeline {
        inline app::RenderPipeline__Class** type_info() {
            static app::RenderPipeline__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RenderPipeline__Class**)(modloader::win::memory::resolve_rva(0x0478A420));
            }
            return cache;
        }
        inline app::RenderPipeline__Class* get_class() {
            return il2cpp::get_class<app::RenderPipeline__Class>(type_info(), "UnityEngine.Experimental.Rendering", "RenderPipeline");
        }
        inline app::RenderPipeline* create() {
            return il2cpp::create_object<app::RenderPipeline>(get_class());
        }
    } // namespace RenderPipeline
} // namespace app::classes::types

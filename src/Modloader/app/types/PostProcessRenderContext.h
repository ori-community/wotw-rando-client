#pragma once
#include <Modloader/app/structs/PostProcessRenderContext.h>
#include <Modloader/app/structs/PostProcessRenderContext__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PostProcessRenderContext {
        inline app::PostProcessRenderContext__Class** type_info() {
            static app::PostProcessRenderContext__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PostProcessRenderContext__Class**)(modloader::win::memory::resolve_rva(0x04708F38));
            }
            return cache;
        }
        inline app::PostProcessRenderContext__Class* get_class() {
            return il2cpp::get_class<app::PostProcessRenderContext__Class>(type_info(), "", "PostProcessRenderContext");
        }
        inline app::PostProcessRenderContext* create() {
            return il2cpp::create_object<app::PostProcessRenderContext>(get_class());
        }
    } // namespace PostProcessRenderContext
} // namespace app::classes::types

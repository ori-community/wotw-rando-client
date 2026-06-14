#pragma once
#include <Modloader/app/structs/UberShaderRenderQueue.h>
#include <Modloader/app/structs/UberShaderRenderQueue__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberShaderRenderQueue {
        inline app::UberShaderRenderQueue__Class** type_info() {
            static app::UberShaderRenderQueue__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UberShaderRenderQueue__Class**)(modloader::win::memory::resolve_rva(0x04770138));
            }
            return cache;
        }
        inline app::UberShaderRenderQueue__Class* get_class() {
            return il2cpp::get_class<app::UberShaderRenderQueue__Class>(type_info(), "", "UberShaderRenderQueue");
        }
        inline app::UberShaderRenderQueue* create() {
            return il2cpp::create_object<app::UberShaderRenderQueue>(get_class());
        }
    } // namespace UberShaderRenderQueue
} // namespace app::classes::types

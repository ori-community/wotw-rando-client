#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberShaderRenderQueue {
        inline app::UberShaderRenderQueue__Class** type_info = (app::UberShaderRenderQueue__Class**)(modloader::win::memory::resolve_rva(0x04770138));
        inline app::UberShaderRenderQueue__Class* get_class() {
            return il2cpp::get_class<app::UberShaderRenderQueue__Class>(type_info, "", "UberShaderRenderQueue");
        }
        inline app::UberShaderRenderQueue* create() {
            return il2cpp::create_object<app::UberShaderRenderQueue>(get_class());
        }
    } // namespace UberShaderRenderQueue
} // namespace app::classes::types

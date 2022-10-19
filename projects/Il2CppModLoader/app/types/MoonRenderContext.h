#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonRenderContext {
        inline app::MoonRenderContext__Class** type_info = (app::MoonRenderContext__Class**)(modloader::win::memory::resolve_rva(0x04770440));
        inline app::MoonRenderContext__Class* get_class() {
            return il2cpp::get_class<app::MoonRenderContext__Class>(type_info, "Moon.Rendering", "MoonRenderContext");
        }
        inline app::MoonRenderContext* create() {
            return il2cpp::create_object<app::MoonRenderContext>(get_class());
        }
    } // namespace MoonRenderContext
} // namespace app::classes::types

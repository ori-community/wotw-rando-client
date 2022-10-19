#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DebugRenderer_c {
        inline app::DebugRenderer_c__Class** type_info = (app::DebugRenderer_c__Class**)(modloader::win::memory::resolve_rva(0x0478CC10));
        inline app::DebugRenderer_c__Class* get_class() {
            return il2cpp::get_nested_class<app::DebugRenderer_c__Class>(type_info, "Moon.VisualDebug", "DebugRenderer", "<>c");
        }
        inline app::DebugRenderer_c* create() {
            return il2cpp::create_object<app::DebugRenderer_c>(get_class());
        }
    } // namespace DebugRenderer_c
} // namespace app::classes::types

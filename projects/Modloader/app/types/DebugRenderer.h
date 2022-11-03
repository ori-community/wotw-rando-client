#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DebugRenderer {
        inline app::DebugRenderer__Class** type_info = (app::DebugRenderer__Class**)(modloader::win::memory::resolve_rva(0x047506E8));
        inline app::DebugRenderer__Class* get_class() {
            return il2cpp::get_class<app::DebugRenderer__Class>(type_info, "Moon.VisualDebug", "DebugRenderer");
        }
        inline app::DebugRenderer* create() {
            return il2cpp::create_object<app::DebugRenderer>(get_class());
        }
    } // namespace DebugRenderer
} // namespace app::classes::types

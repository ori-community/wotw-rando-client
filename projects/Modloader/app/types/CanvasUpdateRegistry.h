#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CanvasUpdateRegistry {
        inline app::CanvasUpdateRegistry__Class** type_info = (app::CanvasUpdateRegistry__Class**)(modloader::win::memory::resolve_rva(0x0472F578));
        inline app::CanvasUpdateRegistry__Class* get_class() {
            return il2cpp::get_class<app::CanvasUpdateRegistry__Class>(type_info, "UnityEngine.UI", "CanvasUpdateRegistry");
        }
        inline app::CanvasUpdateRegistry* create() {
            return il2cpp::create_object<app::CanvasUpdateRegistry>(get_class());
        }
    } // namespace CanvasUpdateRegistry
} // namespace app::classes::types

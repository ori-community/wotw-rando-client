#pragma once
#include <Modloader/app/structs/CanvasUpdateRegistry.h>
#include <Modloader/app/structs/CanvasUpdateRegistry__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CanvasUpdateRegistry {
        inline app::CanvasUpdateRegistry__Class** type_info() {
            static app::CanvasUpdateRegistry__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CanvasUpdateRegistry__Class**)(modloader::win::memory::resolve_rva(0x0472F578));
            }
            return cache;
        }
        inline app::CanvasUpdateRegistry__Class* get_class() {
            return il2cpp::get_class<app::CanvasUpdateRegistry__Class>(type_info(), "UnityEngine.UI", "CanvasUpdateRegistry");
        }
        inline app::CanvasUpdateRegistry* create() {
            return il2cpp::create_object<app::CanvasUpdateRegistry>(get_class());
        }
    } // namespace CanvasUpdateRegistry
} // namespace app::classes::types

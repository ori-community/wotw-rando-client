#pragma once
#include <Modloader/app/structs/GraphicRegistry.h>
#include <Modloader/app/structs/GraphicRegistry__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GraphicRegistry {
        inline app::GraphicRegistry__Class** type_info() {
            static app::GraphicRegistry__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GraphicRegistry__Class**)(modloader::win::memory::resolve_rva(0x047934E8));
            }
            return cache;
        }
        inline app::GraphicRegistry__Class* get_class() {
            return il2cpp::get_class<app::GraphicRegistry__Class>(type_info(), "UnityEngine.UI", "GraphicRegistry");
        }
        inline app::GraphicRegistry* create() {
            return il2cpp::create_object<app::GraphicRegistry>(get_class());
        }
    } // namespace GraphicRegistry
} // namespace app::classes::types

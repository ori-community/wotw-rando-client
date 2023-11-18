#pragma once
#include <Modloader/app/structs/GraphicsFormat__Enum.h>
#include <Modloader/app/structs/GraphicsFormat__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GraphicsFormat__Enum {
        inline app::GraphicsFormat__Enum__Class** type_info() {
            static app::GraphicsFormat__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GraphicsFormat__Enum__Class**)(modloader::win::memory::resolve_rva(0x04707500));
            }
            return cache;
        }
        inline app::GraphicsFormat__Enum__Class* get_class() {
            return il2cpp::get_class<app::GraphicsFormat__Enum__Class>(type_info(), "UnityEngine.Experimental.Rendering", "GraphicsFormat");
        }
        inline app::GraphicsFormat__Enum* create() {
            return il2cpp::create_object<app::GraphicsFormat__Enum>(get_class());
        }
    } // namespace GraphicsFormat__Enum
} // namespace app::classes::types

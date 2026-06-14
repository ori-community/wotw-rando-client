#pragma once
#include <Modloader/app/structs/GraphicsDeviceType__Enum.h>
#include <Modloader/app/structs/GraphicsDeviceType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GraphicsDeviceType__Enum {
        inline app::GraphicsDeviceType__Enum__Class** type_info() {
            static app::GraphicsDeviceType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GraphicsDeviceType__Enum__Class**)(modloader::win::memory::resolve_rva(0x047408F8));
            }
            return cache;
        }
        inline app::GraphicsDeviceType__Enum__Class* get_class() {
            return il2cpp::get_class<app::GraphicsDeviceType__Enum__Class>(type_info(), "UnityEngine.Rendering", "GraphicsDeviceType");
        }
        inline app::GraphicsDeviceType__Enum* create() {
            return il2cpp::create_object<app::GraphicsDeviceType__Enum>(get_class());
        }
    } // namespace GraphicsDeviceType__Enum
} // namespace app::classes::types

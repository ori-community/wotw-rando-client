#pragma once
#include <Modloader/app/structs/GraphicsExt.h>
#include <Modloader/app/structs/GraphicsExt__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GraphicsExt {
        inline app::GraphicsExt__Class** type_info() {
            static app::GraphicsExt__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GraphicsExt__Class**)(modloader::win::memory::resolve_rva(0x047254E0));
            }
            return cache;
        }
        inline app::GraphicsExt__Class* get_class() {
            return il2cpp::get_class<app::GraphicsExt__Class>(type_info(), "Moon.Rendering", "GraphicsExt");
        }
        inline app::GraphicsExt* create() {
            return il2cpp::create_object<app::GraphicsExt>(get_class());
        }
    } // namespace GraphicsExt
} // namespace app::classes::types

#pragma once
#include <Modloader/app/structs/P3D_Painter.h>
#include <Modloader/app/structs/P3D_Painter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace P3D_Painter {
        inline app::P3D_Painter__Class** type_info() {
            static app::P3D_Painter__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::P3D_Painter__Class**)(modloader::win::memory::resolve_rva(0x04767EE8));
            }
            return cache;
        }
        inline app::P3D_Painter__Class* get_class() {
            return il2cpp::get_class<app::P3D_Painter__Class>(type_info(), "", "P3D_Painter");
        }
        inline app::P3D_Painter* create() {
            return il2cpp::create_object<app::P3D_Painter>(get_class());
        }
    } // namespace P3D_Painter
} // namespace app::classes::types

#pragma once
#include <Modloader/app/structs/P3D_Brush.h>
#include <Modloader/app/structs/P3D_Brush__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace P3D_Brush {
        inline app::P3D_Brush__Class** type_info() {
            static app::P3D_Brush__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::P3D_Brush__Class**)(modloader::win::memory::resolve_rva(0x0474EF50));
            }
            return cache;
        }
        inline app::P3D_Brush__Class* get_class() {
            return il2cpp::get_class<app::P3D_Brush__Class>(type_info(), "", "P3D_Brush");
        }
        inline app::P3D_Brush* create() {
            return il2cpp::create_object<app::P3D_Brush>(get_class());
        }
    } // namespace P3D_Brush
} // namespace app::classes::types

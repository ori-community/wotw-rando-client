#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace P3D_Brush {
        inline app::P3D_Brush__Class** type_info = (app::P3D_Brush__Class**)(modloader::win::memory::resolve_rva(0x0474EF50));
        inline app::P3D_Brush__Class* get_class() {
            return il2cpp::get_class<app::P3D_Brush__Class>(type_info, "", "P3D_Brush");
        }
        inline app::P3D_Brush* create() {
            return il2cpp::create_object<app::P3D_Brush>(get_class());
        }
    } // namespace P3D_Brush
} // namespace app::classes::types

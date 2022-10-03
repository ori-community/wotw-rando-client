#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ColorPixelArray {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ColorPixelArray__Class** type_info;
        inline app::ColorPixelArray__Class* get_class() {
            return il2cpp::get_class<app::ColorPixelArray__Class>(type_info, "Moon.ArtOptimization", "ColorPixelArray");
        }
        inline app::ColorPixelArray* create() {
            return il2cpp::create_object<app::ColorPixelArray>(get_class());
        }
    } // namespace ColorPixelArray
} // namespace app::classes::types

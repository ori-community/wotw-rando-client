#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ColorPixelArray {
        inline app::ColorPixelArray__Class** type_info = (app::ColorPixelArray__Class**)(modloader::win::memory::resolve_rva(0x047693F0));
        inline app::ColorPixelArray__Class* get_class() {
            return il2cpp::get_class<app::ColorPixelArray__Class>(type_info, "Moon.ArtOptimization", "ColorPixelArray");
        }
        inline app::ColorPixelArray* create() {
            return il2cpp::create_object<app::ColorPixelArray>(get_class());
        }
    } // namespace ColorPixelArray
} // namespace app::classes::types

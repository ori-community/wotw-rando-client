#pragma once
#include <Modloader/app/structs/ColorPixelArray.h>
#include <Modloader/app/structs/ColorPixelArray__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ColorPixelArray {
        inline app::ColorPixelArray__Class** type_info() {
            static app::ColorPixelArray__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ColorPixelArray__Class**)(modloader::win::memory::resolve_rva(0x047693F0));
            }
            return cache;
        }
        inline app::ColorPixelArray__Class* get_class() {
            return il2cpp::get_class<app::ColorPixelArray__Class>(type_info(), "Moon.ArtOptimization", "ColorPixelArray");
        }
        inline app::ColorPixelArray* create() {
            return il2cpp::create_object<app::ColorPixelArray>(get_class());
        }
    } // namespace ColorPixelArray
} // namespace app::classes::types

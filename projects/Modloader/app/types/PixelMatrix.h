#pragma once
#include <Modloader/app/structs/PixelMatrix.h>
#include <Modloader/app/structs/PixelMatrix__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PixelMatrix {
        inline app::PixelMatrix__Class** type_info() {
            static app::PixelMatrix__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PixelMatrix__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PixelMatrix__Class* get_class() {
            return il2cpp::get_class<app::PixelMatrix__Class>(type_info(), "Colorful", "PixelMatrix");
        }
        inline app::PixelMatrix* create() {
            return il2cpp::create_object<app::PixelMatrix>(get_class());
        }
    } // namespace PixelMatrix
} // namespace app::classes::types

#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PixelMatrix {
        namespace {
            app::PixelMatrix__Class* type_info_ref = nullptr;
        }
        app::PixelMatrix__Class** type_info = &type_info_ref;
        inline app::PixelMatrix__Class* get_class() {
            return il2cpp::get_class<app::PixelMatrix__Class>(type_info, "Colorful", "PixelMatrix");
        }
        inline app::PixelMatrix* create() {
            return il2cpp::create_object<app::PixelMatrix>(get_class());
        }
    } // namespace PixelMatrix
} // namespace app::classes::types

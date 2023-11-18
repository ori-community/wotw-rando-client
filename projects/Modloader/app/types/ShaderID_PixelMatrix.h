#pragma once
#include <Modloader/app/structs/ShaderID_PixelMatrix.h>
#include <Modloader/app/structs/ShaderID_PixelMatrix__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_PixelMatrix {
        inline app::ShaderID_PixelMatrix__Class** type_info() {
            static app::ShaderID_PixelMatrix__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_PixelMatrix__Class**)(modloader::win::memory::resolve_rva(0x0470A748));
            }
            return cache;
        }
        inline app::ShaderID_PixelMatrix__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_PixelMatrix__Class>(type_info(), "Colorful", "ShaderID_PixelMatrix");
        }
        inline app::ShaderID_PixelMatrix* create() {
            return il2cpp::create_object<app::ShaderID_PixelMatrix>(get_class());
        }
    } // namespace ShaderID_PixelMatrix
} // namespace app::classes::types

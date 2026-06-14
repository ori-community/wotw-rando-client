#pragma once
#include <Modloader/app/structs/ShaderID_Strokes.h>
#include <Modloader/app/structs/ShaderID_Strokes__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_Strokes {
        inline app::ShaderID_Strokes__Class** type_info() {
            static app::ShaderID_Strokes__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_Strokes__Class**)(modloader::win::memory::resolve_rva(0x04766378));
            }
            return cache;
        }
        inline app::ShaderID_Strokes__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_Strokes__Class>(type_info(), "Colorful", "ShaderID_Strokes");
        }
        inline app::ShaderID_Strokes* create() {
            return il2cpp::create_object<app::ShaderID_Strokes>(get_class());
        }
    } // namespace ShaderID_Strokes
} // namespace app::classes::types

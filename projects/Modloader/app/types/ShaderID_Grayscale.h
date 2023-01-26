#pragma once
#include <Modloader/app/structs/ShaderID_Grayscale.h>
#include <Modloader/app/structs/ShaderID_Grayscale__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_Grayscale {
        inline app::ShaderID_Grayscale__Class** type_info() {
            static app::ShaderID_Grayscale__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_Grayscale__Class**)(modloader::win::memory::resolve_rva(0x0473E550));
            }
            return cache;
        }
        inline app::ShaderID_Grayscale__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_Grayscale__Class>(type_info(), "Colorful", "ShaderID_Grayscale");
        }
        inline app::ShaderID_Grayscale* create() {
            return il2cpp::create_object<app::ShaderID_Grayscale>(get_class());
        }
    } // namespace ShaderID_Grayscale
} // namespace app::classes::types

#pragma once
#include <Modloader/app/structs/ShaderID_Convolution3x3.h>
#include <Modloader/app/structs/ShaderID_Convolution3x3__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_Convolution3x3 {
        inline app::ShaderID_Convolution3x3__Class** type_info() {
            static app::ShaderID_Convolution3x3__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_Convolution3x3__Class**)(modloader::win::memory::resolve_rva(0x047155D8));
            }
            return cache;
        }
        inline app::ShaderID_Convolution3x3__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_Convolution3x3__Class>(type_info(), "Colorful", "ShaderID_Convolution3x3");
        }
        inline app::ShaderID_Convolution3x3* create() {
            return il2cpp::create_object<app::ShaderID_Convolution3x3>(get_class());
        }
    } // namespace ShaderID_Convolution3x3
} // namespace app::classes::types

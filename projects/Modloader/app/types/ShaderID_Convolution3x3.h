#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ShaderID_Convolution3x3__Class.h>
#include <Modloader/app/structs/ShaderID_Convolution3x3.h>

namespace app::classes::types {
    namespace ShaderID_Convolution3x3 {
        inline app::ShaderID_Convolution3x3__Class** type_info = (app::ShaderID_Convolution3x3__Class**)(modloader::win::memory::resolve_rva(0x047155D8));
        inline app::ShaderID_Convolution3x3__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_Convolution3x3__Class>(type_info, "Colorful", "ShaderID_Convolution3x3");
        }
        inline app::ShaderID_Convolution3x3* create() {
            return il2cpp::create_object<app::ShaderID_Convolution3x3>(get_class());
        }
    } // namespace ShaderID_Convolution3x3
} // namespace app::classes::types

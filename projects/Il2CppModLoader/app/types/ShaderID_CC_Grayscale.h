#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShaderID_CC_Grayscale {
        inline app::ShaderID_CC_Grayscale__Class** type_info = (app::ShaderID_CC_Grayscale__Class**)(modloader::win::memory::resolve_rva(0x047756A0));
        inline app::ShaderID_CC_Grayscale__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CC_Grayscale__Class>(type_info, "", "ShaderID_CC_Grayscale");
        }
        inline app::ShaderID_CC_Grayscale* create() {
            return il2cpp::create_object<app::ShaderID_CC_Grayscale>(get_class());
        }
    } // namespace ShaderID_CC_Grayscale
} // namespace app::classes::types

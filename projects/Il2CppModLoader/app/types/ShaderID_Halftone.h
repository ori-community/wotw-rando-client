#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShaderID_Halftone {
        inline app::ShaderID_Halftone__Class** type_info = (app::ShaderID_Halftone__Class**)(modloader::win::memory::resolve_rva(0x04731848));
        inline app::ShaderID_Halftone__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_Halftone__Class>(type_info, "Colorful", "ShaderID_Halftone");
        }
        inline app::ShaderID_Halftone* create() {
            return il2cpp::create_object<app::ShaderID_Halftone>(get_class());
        }
    } // namespace ShaderID_Halftone
} // namespace app::classes::types

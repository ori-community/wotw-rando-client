#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShaderID_RGBSplit {
        inline app::ShaderID_RGBSplit__Class** type_info = (app::ShaderID_RGBSplit__Class**)(modloader::win::memory::resolve_rva(0x04751DD8));
        inline app::ShaderID_RGBSplit__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_RGBSplit__Class>(type_info, "Colorful", "ShaderID_RGBSplit");
        }
        inline app::ShaderID_RGBSplit* create() {
            return il2cpp::create_object<app::ShaderID_RGBSplit>(get_class());
        }
    } // namespace ShaderID_RGBSplit
} // namespace app::classes::types

#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShaderID_CC_Vibrance {
        inline app::ShaderID_CC_Vibrance__Class** type_info = (app::ShaderID_CC_Vibrance__Class**)(modloader::win::memory::resolve_rva(0x0471F8C8));
        inline app::ShaderID_CC_Vibrance__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CC_Vibrance__Class>(type_info, "", "ShaderID_CC_Vibrance");
        }
        inline app::ShaderID_CC_Vibrance* create() {
            return il2cpp::create_object<app::ShaderID_CC_Vibrance>(get_class());
        }
    } // namespace ShaderID_CC_Vibrance
} // namespace app::classes::types

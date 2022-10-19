#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShaderID_CC_Levels {
        inline app::ShaderID_CC_Levels__Class** type_info = (app::ShaderID_CC_Levels__Class**)(modloader::win::memory::resolve_rva(0x0477F8A0));
        inline app::ShaderID_CC_Levels__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CC_Levels__Class>(type_info, "", "ShaderID_CC_Levels");
        }
        inline app::ShaderID_CC_Levels* create() {
            return il2cpp::create_object<app::ShaderID_CC_Levels>(get_class());
        }
    } // namespace ShaderID_CC_Levels
} // namespace app::classes::types

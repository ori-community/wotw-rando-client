#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShaderID_CC_Posterize {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShaderID_CC_Posterize__Class** type_info;
        inline app::ShaderID_CC_Posterize__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CC_Posterize__Class>(type_info, "", "ShaderID_CC_Posterize");
        }
        inline app::ShaderID_CC_Posterize* create() {
            return il2cpp::create_object<app::ShaderID_CC_Posterize>(get_class());
        }
    } // namespace ShaderID_CC_Posterize
} // namespace app::classes::types

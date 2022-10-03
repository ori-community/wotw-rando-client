#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShaderID_FBIKBoxing {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShaderID_FBIKBoxing__Class** type_info;
        inline app::ShaderID_FBIKBoxing__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_FBIKBoxing__Class>(type_info, "RootMotion.Demos", "ShaderID_FBIKBoxing");
        }
        inline app::ShaderID_FBIKBoxing* create() {
            return il2cpp::create_object<app::ShaderID_FBIKBoxing>(get_class());
        }
    } // namespace ShaderID_FBIKBoxing
} // namespace app::classes::types

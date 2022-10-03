#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShaderID_AmplifyColorBase {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShaderID_AmplifyColorBase__Class** type_info;
        inline app::ShaderID_AmplifyColorBase__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_AmplifyColorBase__Class>(type_info, "AmplifyColor", "ShaderID_AmplifyColorBase");
        }
        inline app::ShaderID_AmplifyColorBase* create() {
            return il2cpp::create_object<app::ShaderID_AmplifyColorBase>(get_class());
        }
    } // namespace ShaderID_AmplifyColorBase
} // namespace app::classes::types

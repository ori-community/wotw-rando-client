#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShaderID_SceneScreenshot {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShaderID_SceneScreenshot__Class** type_info;
        inline app::ShaderID_SceneScreenshot__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_SceneScreenshot__Class>(type_info, "", "ShaderID_SceneScreenshot");
        }
        inline app::ShaderID_SceneScreenshot* create() {
            return il2cpp::create_object<app::ShaderID_SceneScreenshot>(get_class());
        }
    } // namespace ShaderID_SceneScreenshot
} // namespace app::classes::types

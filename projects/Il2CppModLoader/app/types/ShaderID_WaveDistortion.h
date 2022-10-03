#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShaderID_WaveDistortion {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShaderID_WaveDistortion__Class** type_info;
        inline app::ShaderID_WaveDistortion__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_WaveDistortion__Class>(type_info, "Colorful", "ShaderID_WaveDistortion");
        }
        inline app::ShaderID_WaveDistortion* create() {
            return il2cpp::create_object<app::ShaderID_WaveDistortion>(get_class());
        }
    } // namespace ShaderID_WaveDistortion
} // namespace app::classes::types

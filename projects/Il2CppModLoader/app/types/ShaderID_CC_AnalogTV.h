#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShaderID_CC_AnalogTV {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShaderID_CC_AnalogTV__Class** type_info;
        inline app::ShaderID_CC_AnalogTV__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CC_AnalogTV__Class>(type_info, "", "ShaderID_CC_AnalogTV");
        }
        inline app::ShaderID_CC_AnalogTV* create() {
            return il2cpp::create_object<app::ShaderID_CC_AnalogTV>(get_class());
        }
    } // namespace ShaderID_CC_AnalogTV
} // namespace app::classes::types

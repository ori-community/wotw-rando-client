#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SceneFPSTest_ShaderID {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SceneFPSTest_ShaderID__Class** type_info;
        inline app::SceneFPSTest_ShaderID__Class* get_class() {
            return il2cpp::get_nested_class<app::SceneFPSTest_ShaderID__Class>(type_info, "", "SceneFPSTest", "ShaderID");
        }
        inline app::SceneFPSTest_ShaderID* create() {
            return il2cpp::create_object<app::SceneFPSTest_ShaderID>(get_class());
        }
    } // namespace SceneFPSTest_ShaderID
} // namespace app::classes::types

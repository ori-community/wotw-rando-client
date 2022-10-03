#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberWaterControl_ShaderID {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UberWaterControl_ShaderID__Class** type_info;
        inline app::UberWaterControl_ShaderID__Class* get_class() {
            return il2cpp::get_nested_class<app::UberWaterControl_ShaderID__Class>(type_info, "", "UberWaterControl", "ShaderID");
        }
        inline app::UberWaterControl_ShaderID* create() {
            return il2cpp::create_object<app::UberWaterControl_ShaderID>(get_class());
        }
    } // namespace UberWaterControl_ShaderID
} // namespace app::classes::types

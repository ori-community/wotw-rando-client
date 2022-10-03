#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShaderID_UberScreenManager {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShaderID_UberScreenManager__Class** type_info;
        inline app::ShaderID_UberScreenManager__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_UberScreenManager__Class>(type_info, "", "ShaderID_UberScreenManager");
        }
        inline app::ShaderID_UberScreenManager* create() {
            return il2cpp::create_object<app::ShaderID_UberScreenManager>(get_class());
        }
    } // namespace ShaderID_UberScreenManager
} // namespace app::classes::types

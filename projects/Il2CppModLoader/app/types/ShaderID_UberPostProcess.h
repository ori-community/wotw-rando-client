#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShaderID_UberPostProcess {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShaderID_UberPostProcess__Class** type_info;
        inline app::ShaderID_UberPostProcess__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_UberPostProcess__Class>(type_info, "", "ShaderID_UberPostProcess");
        }
        inline app::ShaderID_UberPostProcess* create() {
            return il2cpp::create_object<app::ShaderID_UberPostProcess>(get_class());
        }
    } // namespace ShaderID_UberPostProcess
} // namespace app::classes::types

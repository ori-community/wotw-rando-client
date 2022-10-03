#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShaderKeyword_UberPostProcess {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShaderKeyword_UberPostProcess__Class** type_info;
        inline app::ShaderKeyword_UberPostProcess__Class* get_class() {
            return il2cpp::get_class<app::ShaderKeyword_UberPostProcess__Class>(type_info, "", "ShaderKeyword_UberPostProcess");
        }
        inline app::ShaderKeyword_UberPostProcess* create() {
            return il2cpp::create_object<app::ShaderKeyword_UberPostProcess>(get_class());
        }
    } // namespace ShaderKeyword_UberPostProcess
} // namespace app::classes::types

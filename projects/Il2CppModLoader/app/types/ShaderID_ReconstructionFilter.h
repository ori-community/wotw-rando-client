#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShaderID_ReconstructionFilter {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShaderID_ReconstructionFilter__Class** type_info;
        inline app::ShaderID_ReconstructionFilter__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_ReconstructionFilter__Class>(type_info, "Kino", "ShaderID_ReconstructionFilter");
        }
        inline app::ShaderID_ReconstructionFilter* create() {
            return il2cpp::create_object<app::ShaderID_ReconstructionFilter>(get_class());
        }
    } // namespace ShaderID_ReconstructionFilter
} // namespace app::classes::types

#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShaderID_LookupFilter {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShaderID_LookupFilter__Class** type_info;
        inline app::ShaderID_LookupFilter__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_LookupFilter__Class>(type_info, "Colorful", "ShaderID_LookupFilter");
        }
        inline app::ShaderID_LookupFilter* create() {
            return il2cpp::create_object<app::ShaderID_LookupFilter>(get_class());
        }
    } // namespace ShaderID_LookupFilter
} // namespace app::classes::types

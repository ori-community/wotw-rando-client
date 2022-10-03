#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShaderID_DynamicLookup {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShaderID_DynamicLookup__Class** type_info;
        inline app::ShaderID_DynamicLookup__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_DynamicLookup__Class>(type_info, "Colorful", "ShaderID_DynamicLookup");
        }
        inline app::ShaderID_DynamicLookup* create() {
            return il2cpp::create_object<app::ShaderID_DynamicLookup>(get_class());
        }
    } // namespace ShaderID_DynamicLookup
} // namespace app::classes::types

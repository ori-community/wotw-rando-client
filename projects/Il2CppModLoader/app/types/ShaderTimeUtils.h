#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShaderTimeUtils {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShaderTimeUtils__Class** type_info;
        inline app::ShaderTimeUtils__Class* get_class() {
            return il2cpp::get_class<app::ShaderTimeUtils__Class>(type_info, "Moon", "ShaderTimeUtils");
        }
        inline app::ShaderTimeUtils* create() {
            return il2cpp::create_object<app::ShaderTimeUtils>(get_class());
        }
    } // namespace ShaderTimeUtils
} // namespace app::classes::types

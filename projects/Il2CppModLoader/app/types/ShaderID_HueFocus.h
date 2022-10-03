#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShaderID_HueFocus {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShaderID_HueFocus__Class** type_info;
        inline app::ShaderID_HueFocus__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_HueFocus__Class>(type_info, "Colorful", "ShaderID_HueFocus");
        }
        inline app::ShaderID_HueFocus* create() {
            return il2cpp::create_object<app::ShaderID_HueFocus>(get_class());
        }
    } // namespace ShaderID_HueFocus
} // namespace app::classes::types

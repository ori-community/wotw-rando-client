#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShaderID_DebugRenderer {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShaderID_DebugRenderer__Class** type_info;
        inline app::ShaderID_DebugRenderer__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_DebugRenderer__Class>(type_info, "Moon.VisualDebug", "ShaderID_DebugRenderer");
        }
        inline app::ShaderID_DebugRenderer* create() {
            return il2cpp::create_object<app::ShaderID_DebugRenderer>(get_class());
        }
    } // namespace ShaderID_DebugRenderer
} // namespace app::classes::types

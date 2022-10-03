#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShaderID_OccludeMotionVectors {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShaderID_OccludeMotionVectors__Class** type_info;
        inline app::ShaderID_OccludeMotionVectors__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_OccludeMotionVectors__Class>(type_info, "LayeredRender", "ShaderID_OccludeMotionVectors");
        }
        inline app::ShaderID_OccludeMotionVectors* create() {
            return il2cpp::create_object<app::ShaderID_OccludeMotionVectors>(get_class());
        }
    } // namespace ShaderID_OccludeMotionVectors
} // namespace app::classes::types

#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShaderID_Antialiasing {
        inline app::ShaderID_Antialiasing__Class** type_info = (app::ShaderID_Antialiasing__Class**)(modloader::win::memory::resolve_rva(0x0478F148));
        inline app::ShaderID_Antialiasing__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_Antialiasing__Class>(type_info, "UnityStandardAssets.ImageEffects", "ShaderID_Antialiasing");
        }
        inline app::ShaderID_Antialiasing* create() {
            return il2cpp::create_object<app::ShaderID_Antialiasing>(get_class());
        }
    } // namespace ShaderID_Antialiasing
} // namespace app::classes::types

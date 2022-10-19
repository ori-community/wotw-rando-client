#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShaderID_GradientRampDynamic {
        inline app::ShaderID_GradientRampDynamic__Class** type_info = (app::ShaderID_GradientRampDynamic__Class**)(modloader::win::memory::resolve_rva(0x0471F658));
        inline app::ShaderID_GradientRampDynamic__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_GradientRampDynamic__Class>(type_info, "Colorful", "ShaderID_GradientRampDynamic");
        }
        inline app::ShaderID_GradientRampDynamic* create() {
            return il2cpp::create_object<app::ShaderID_GradientRampDynamic>(get_class());
        }
    } // namespace ShaderID_GradientRampDynamic
} // namespace app::classes::types

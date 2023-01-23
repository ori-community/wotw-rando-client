#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ShaderID_BlurOptimized__Class.h>
#include <Modloader/app/structs/ShaderID_BlurOptimized.h>

namespace app::classes::types {
    namespace ShaderID_BlurOptimized {
        inline app::ShaderID_BlurOptimized__Class** type_info = (app::ShaderID_BlurOptimized__Class**)(modloader::win::memory::resolve_rva(0x047665B8));
        inline app::ShaderID_BlurOptimized__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_BlurOptimized__Class>(type_info, "UnityStandardAssets.ImageEffects", "ShaderID_BlurOptimized");
        }
        inline app::ShaderID_BlurOptimized* create() {
            return il2cpp::create_object<app::ShaderID_BlurOptimized>(get_class());
        }
    } // namespace ShaderID_BlurOptimized
} // namespace app::classes::types

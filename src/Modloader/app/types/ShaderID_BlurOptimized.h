#pragma once
#include <Modloader/app/structs/ShaderID_BlurOptimized.h>
#include <Modloader/app/structs/ShaderID_BlurOptimized__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_BlurOptimized {
        inline app::ShaderID_BlurOptimized__Class** type_info() {
            static app::ShaderID_BlurOptimized__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_BlurOptimized__Class**)(modloader::win::memory::resolve_rva(0x047665B8));
            }
            return cache;
        }
        inline app::ShaderID_BlurOptimized__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_BlurOptimized__Class>(type_info(), "UnityStandardAssets.ImageEffects", "ShaderID_BlurOptimized");
        }
        inline app::ShaderID_BlurOptimized* create() {
            return il2cpp::create_object<app::ShaderID_BlurOptimized>(get_class());
        }
    } // namespace ShaderID_BlurOptimized
} // namespace app::classes::types

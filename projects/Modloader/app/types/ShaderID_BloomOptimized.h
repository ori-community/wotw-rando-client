#pragma once
#include <Modloader/app/structs/ShaderID_BloomOptimized.h>
#include <Modloader/app/structs/ShaderID_BloomOptimized__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_BloomOptimized {
        inline app::ShaderID_BloomOptimized__Class** type_info() {
            static app::ShaderID_BloomOptimized__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_BloomOptimized__Class**)(modloader::win::memory::resolve_rva(0x0474D718));
            }
            return cache;
        }
        inline app::ShaderID_BloomOptimized__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_BloomOptimized__Class>(type_info(), "UnityStandardAssets.ImageEffects", "ShaderID_BloomOptimized");
        }
        inline app::ShaderID_BloomOptimized* create() {
            return il2cpp::create_object<app::ShaderID_BloomOptimized>(get_class());
        }
    } // namespace ShaderID_BloomOptimized
} // namespace app::classes::types

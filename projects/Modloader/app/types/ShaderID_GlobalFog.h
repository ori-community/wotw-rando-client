#pragma once
#include <Modloader/app/structs/ShaderID_GlobalFog.h>
#include <Modloader/app/structs/ShaderID_GlobalFog__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_GlobalFog {
        inline app::ShaderID_GlobalFog__Class** type_info() {
            static app::ShaderID_GlobalFog__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_GlobalFog__Class**)(modloader::win::memory::resolve_rva(0x04761D38));
            }
            return cache;
        }
        inline app::ShaderID_GlobalFog__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_GlobalFog__Class>(type_info(), "UnityStandardAssets.ImageEffects", "ShaderID_GlobalFog");
        }
        inline app::ShaderID_GlobalFog* create() {
            return il2cpp::create_object<app::ShaderID_GlobalFog>(get_class());
        }
    } // namespace ShaderID_GlobalFog
} // namespace app::classes::types

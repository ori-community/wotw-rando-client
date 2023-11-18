#pragma once
#include <Modloader/app/structs/ShaderID_SMAA.h>
#include <Modloader/app/structs/ShaderID_SMAA__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_SMAA {
        inline app::ShaderID_SMAA__Class** type_info() {
            static app::ShaderID_SMAA__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_SMAA__Class**)(modloader::win::memory::resolve_rva(0x04764140));
            }
            return cache;
        }
        inline app::ShaderID_SMAA__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_SMAA__Class>(type_info(), "UnityStandardAssets.CinematicEffects", "ShaderID_SMAA");
        }
        inline app::ShaderID_SMAA* create() {
            return il2cpp::create_object<app::ShaderID_SMAA>(get_class());
        }
    } // namespace ShaderID_SMAA
} // namespace app::classes::types

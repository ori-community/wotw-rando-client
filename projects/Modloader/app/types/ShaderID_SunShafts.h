#pragma once
#include <Modloader/app/structs/ShaderID_SunShafts.h>
#include <Modloader/app/structs/ShaderID_SunShafts__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_SunShafts {
        inline app::ShaderID_SunShafts__Class** type_info() {
            static app::ShaderID_SunShafts__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_SunShafts__Class**)(modloader::win::memory::resolve_rva(0x0475D6F8));
            }
            return cache;
        }
        inline app::ShaderID_SunShafts__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_SunShafts__Class>(type_info(), "UnityStandardAssets.ImageEffects", "ShaderID_SunShafts");
        }
        inline app::ShaderID_SunShafts* create() {
            return il2cpp::create_object<app::ShaderID_SunShafts>(get_class());
        }
    } // namespace ShaderID_SunShafts
} // namespace app::classes::types

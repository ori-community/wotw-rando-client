#pragma once
#include <Modloader/app/structs/ShaderID_Fisheye.h>
#include <Modloader/app/structs/ShaderID_Fisheye__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_Fisheye {
        inline app::ShaderID_Fisheye__Class** type_info() {
            static app::ShaderID_Fisheye__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_Fisheye__Class**)(modloader::win::memory::resolve_rva(0x04793F70));
            }
            return cache;
        }
        inline app::ShaderID_Fisheye__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_Fisheye__Class>(type_info(), "UnityStandardAssets.ImageEffects", "ShaderID_Fisheye");
        }
        inline app::ShaderID_Fisheye* create() {
            return il2cpp::create_object<app::ShaderID_Fisheye>(get_class());
        }
    } // namespace ShaderID_Fisheye
} // namespace app::classes::types

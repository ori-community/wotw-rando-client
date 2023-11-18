#pragma once
#include <Modloader/app/structs/ShaderID_ScreenSpaceAmbientObscurance.h>
#include <Modloader/app/structs/ShaderID_ScreenSpaceAmbientObscurance__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_ScreenSpaceAmbientObscurance {
        inline app::ShaderID_ScreenSpaceAmbientObscurance__Class** type_info() {
            static app::ShaderID_ScreenSpaceAmbientObscurance__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_ScreenSpaceAmbientObscurance__Class**)(modloader::win::memory::resolve_rva(0x047095D8));
            }
            return cache;
        }
        inline app::ShaderID_ScreenSpaceAmbientObscurance__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_ScreenSpaceAmbientObscurance__Class>(type_info(), "UnityStandardAssets.ImageEffects", "ShaderID_ScreenSpaceAmbientObscurance");
        }
        inline app::ShaderID_ScreenSpaceAmbientObscurance* create() {
            return il2cpp::create_object<app::ShaderID_ScreenSpaceAmbientObscurance>(get_class());
        }
    } // namespace ShaderID_ScreenSpaceAmbientObscurance
} // namespace app::classes::types

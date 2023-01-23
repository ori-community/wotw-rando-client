#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ShaderID_ScreenSpaceAmbientObscurance__Class.h>
#include <Modloader/app/structs/ShaderID_ScreenSpaceAmbientObscurance.h>

namespace app::classes::types {
    namespace ShaderID_ScreenSpaceAmbientObscurance {
        inline app::ShaderID_ScreenSpaceAmbientObscurance__Class** type_info = (app::ShaderID_ScreenSpaceAmbientObscurance__Class**)(modloader::win::memory::resolve_rva(0x047095D8));
        inline app::ShaderID_ScreenSpaceAmbientObscurance__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_ScreenSpaceAmbientObscurance__Class>(type_info, "UnityStandardAssets.ImageEffects", "ShaderID_ScreenSpaceAmbientObscurance");
        }
        inline app::ShaderID_ScreenSpaceAmbientObscurance* create() {
            return il2cpp::create_object<app::ShaderID_ScreenSpaceAmbientObscurance>(get_class());
        }
    } // namespace ShaderID_ScreenSpaceAmbientObscurance
} // namespace app::classes::types

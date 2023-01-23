#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ShaderID_LensDistortionBlur__Class.h>
#include <Modloader/app/structs/ShaderID_LensDistortionBlur.h>

namespace app::classes::types {
    namespace ShaderID_LensDistortionBlur {
        inline app::ShaderID_LensDistortionBlur__Class** type_info = (app::ShaderID_LensDistortionBlur__Class**)(modloader::win::memory::resolve_rva(0x0472B0B8));
        inline app::ShaderID_LensDistortionBlur__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_LensDistortionBlur__Class>(type_info, "Colorful", "ShaderID_LensDistortionBlur");
        }
        inline app::ShaderID_LensDistortionBlur* create() {
            return il2cpp::create_object<app::ShaderID_LensDistortionBlur>(get_class());
        }
    } // namespace ShaderID_LensDistortionBlur
} // namespace app::classes::types

#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ShaderID_TiltShift__Class.h>
#include <Modloader/app/structs/ShaderID_TiltShift.h>

namespace app::classes::types {
    namespace ShaderID_TiltShift {
        inline app::ShaderID_TiltShift__Class** type_info = (app::ShaderID_TiltShift__Class**)(modloader::win::memory::resolve_rva(0x0471FC68));
        inline app::ShaderID_TiltShift__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_TiltShift__Class>(type_info, "UnityStandardAssets.ImageEffects", "ShaderID_TiltShift");
        }
        inline app::ShaderID_TiltShift* create() {
            return il2cpp::create_object<app::ShaderID_TiltShift>(get_class());
        }
    } // namespace ShaderID_TiltShift
} // namespace app::classes::types

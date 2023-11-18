#pragma once
#include <Modloader/app/structs/ShaderID_CameraFilterPack_FX_InverChromiLum.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_FX_InverChromiLum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_FX_InverChromiLum {
        inline app::ShaderID_CameraFilterPack_FX_InverChromiLum__Class** type_info() {
            static app::ShaderID_CameraFilterPack_FX_InverChromiLum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_CameraFilterPack_FX_InverChromiLum__Class**)(modloader::win::memory::resolve_rva(0x04765118));
            }
            return cache;
        }
        inline app::ShaderID_CameraFilterPack_FX_InverChromiLum__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_FX_InverChromiLum__Class>(type_info(), "", "ShaderID_CameraFilterPack_FX_InverChromiLum");
        }
        inline app::ShaderID_CameraFilterPack_FX_InverChromiLum* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_FX_InverChromiLum>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_FX_InverChromiLum
} // namespace app::classes::types

#pragma once
#include <Modloader/app/structs/ShaderID_CameraFilterPack_FX_8bits_gb.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_FX_8bits_gb__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_FX_8bits_gb {
        inline app::ShaderID_CameraFilterPack_FX_8bits_gb__Class** type_info() {
            static app::ShaderID_CameraFilterPack_FX_8bits_gb__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_CameraFilterPack_FX_8bits_gb__Class**)(modloader::win::memory::resolve_rva(0x0475C4D8));
            }
            return cache;
        }
        inline app::ShaderID_CameraFilterPack_FX_8bits_gb__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_FX_8bits_gb__Class>(type_info(), "", "ShaderID_CameraFilterPack_FX_8bits_gb");
        }
        inline app::ShaderID_CameraFilterPack_FX_8bits_gb* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_FX_8bits_gb>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_FX_8bits_gb
} // namespace app::classes::types

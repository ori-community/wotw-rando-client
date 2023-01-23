#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Blend2Camera_HardMix__Class.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Blend2Camera_HardMix.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_Blend2Camera_HardMix {
        inline app::ShaderID_CameraFilterPack_Blend2Camera_HardMix__Class** type_info = (app::ShaderID_CameraFilterPack_Blend2Camera_HardMix__Class**)(modloader::win::memory::resolve_rva(0x047009C8));
        inline app::ShaderID_CameraFilterPack_Blend2Camera_HardMix__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_Blend2Camera_HardMix__Class>(type_info, "", "ShaderID_CameraFilterPack_Blend2Camera_HardMix");
        }
        inline app::ShaderID_CameraFilterPack_Blend2Camera_HardMix* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_Blend2Camera_HardMix>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_Blend2Camera_HardMix
} // namespace app::classes::types

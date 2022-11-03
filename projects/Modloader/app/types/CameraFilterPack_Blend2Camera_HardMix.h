#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraFilterPack_Blend2Camera_HardMix {
        inline app::CameraFilterPack_Blend2Camera_HardMix__Class** type_info = (app::CameraFilterPack_Blend2Camera_HardMix__Class**)(modloader::win::memory::resolve_rva(0x04703898));
        inline app::CameraFilterPack_Blend2Camera_HardMix__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Blend2Camera_HardMix__Class>(type_info, "", "CameraFilterPack_Blend2Camera_HardMix");
        }
        inline app::CameraFilterPack_Blend2Camera_HardMix* create() {
            return il2cpp::create_object<app::CameraFilterPack_Blend2Camera_HardMix>(get_class());
        }
    } // namespace CameraFilterPack_Blend2Camera_HardMix
} // namespace app::classes::types

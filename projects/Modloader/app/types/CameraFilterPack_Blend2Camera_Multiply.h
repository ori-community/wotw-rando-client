#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraFilterPack_Blend2Camera_Multiply {
        inline app::CameraFilterPack_Blend2Camera_Multiply__Class** type_info = (app::CameraFilterPack_Blend2Camera_Multiply__Class**)(modloader::win::memory::resolve_rva(0x0471D108));
        inline app::CameraFilterPack_Blend2Camera_Multiply__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Blend2Camera_Multiply__Class>(type_info, "", "CameraFilterPack_Blend2Camera_Multiply");
        }
        inline app::CameraFilterPack_Blend2Camera_Multiply* create() {
            return il2cpp::create_object<app::CameraFilterPack_Blend2Camera_Multiply>(get_class());
        }
    } // namespace CameraFilterPack_Blend2Camera_Multiply
} // namespace app::classes::types

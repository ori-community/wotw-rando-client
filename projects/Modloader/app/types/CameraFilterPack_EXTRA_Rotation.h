#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraFilterPack_EXTRA_Rotation {
        inline app::CameraFilterPack_EXTRA_Rotation__Class** type_info = (app::CameraFilterPack_EXTRA_Rotation__Class**)(modloader::win::memory::resolve_rva(0x047622D8));
        inline app::CameraFilterPack_EXTRA_Rotation__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_EXTRA_Rotation__Class>(type_info, "", "CameraFilterPack_EXTRA_Rotation");
        }
        inline app::CameraFilterPack_EXTRA_Rotation* create() {
            return il2cpp::create_object<app::CameraFilterPack_EXTRA_Rotation>(get_class());
        }
    } // namespace CameraFilterPack_EXTRA_Rotation
} // namespace app::classes::types

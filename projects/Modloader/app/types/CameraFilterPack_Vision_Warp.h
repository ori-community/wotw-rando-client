#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CameraFilterPack_Vision_Warp__Class.h>
#include <Modloader/app/structs/CameraFilterPack_Vision_Warp.h>

namespace app::classes::types {
    namespace CameraFilterPack_Vision_Warp {
        inline app::CameraFilterPack_Vision_Warp__Class** type_info = (app::CameraFilterPack_Vision_Warp__Class**)(modloader::win::memory::resolve_rva(0x04718C58));
        inline app::CameraFilterPack_Vision_Warp__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Vision_Warp__Class>(type_info, "", "CameraFilterPack_Vision_Warp");
        }
        inline app::CameraFilterPack_Vision_Warp* create() {
            return il2cpp::create_object<app::CameraFilterPack_Vision_Warp>(get_class());
        }
    } // namespace CameraFilterPack_Vision_Warp
} // namespace app::classes::types

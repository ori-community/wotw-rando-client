#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraFilterPack_Light_Rainbow2 {
        inline app::CameraFilterPack_Light_Rainbow2__Class** type_info = (app::CameraFilterPack_Light_Rainbow2__Class**)(modloader::win::memory::resolve_rva(0x047087C8));
        inline app::CameraFilterPack_Light_Rainbow2__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Light_Rainbow2__Class>(type_info, "", "CameraFilterPack_Light_Rainbow2");
        }
        inline app::CameraFilterPack_Light_Rainbow2* create() {
            return il2cpp::create_object<app::CameraFilterPack_Light_Rainbow2>(get_class());
        }
    } // namespace CameraFilterPack_Light_Rainbow2
} // namespace app::classes::types

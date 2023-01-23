#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CameraFilterPack_Light_Water__Class.h>
#include <Modloader/app/structs/CameraFilterPack_Light_Water.h>

namespace app::classes::types {
    namespace CameraFilterPack_Light_Water {
        inline app::CameraFilterPack_Light_Water__Class** type_info = (app::CameraFilterPack_Light_Water__Class**)(modloader::win::memory::resolve_rva(0x04760D68));
        inline app::CameraFilterPack_Light_Water__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Light_Water__Class>(type_info, "", "CameraFilterPack_Light_Water");
        }
        inline app::CameraFilterPack_Light_Water* create() {
            return il2cpp::create_object<app::CameraFilterPack_Light_Water>(get_class());
        }
    } // namespace CameraFilterPack_Light_Water
} // namespace app::classes::types

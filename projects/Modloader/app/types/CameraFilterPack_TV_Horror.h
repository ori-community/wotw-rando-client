#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraFilterPack_TV_Horror {
        inline app::CameraFilterPack_TV_Horror__Class** type_info = (app::CameraFilterPack_TV_Horror__Class**)(modloader::win::memory::resolve_rva(0x047306A0));
        inline app::CameraFilterPack_TV_Horror__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_TV_Horror__Class>(type_info, "", "CameraFilterPack_TV_Horror");
        }
        inline app::CameraFilterPack_TV_Horror* create() {
            return il2cpp::create_object<app::CameraFilterPack_TV_Horror>(get_class());
        }
    } // namespace CameraFilterPack_TV_Horror
} // namespace app::classes::types

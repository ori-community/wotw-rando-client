#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraFilterPack_FX_Grid {
        inline app::CameraFilterPack_FX_Grid__Class** type_info = (app::CameraFilterPack_FX_Grid__Class**)(modloader::win::memory::resolve_rva(0x047188F0));
        inline app::CameraFilterPack_FX_Grid__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_FX_Grid__Class>(type_info, "", "CameraFilterPack_FX_Grid");
        }
        inline app::CameraFilterPack_FX_Grid* create() {
            return il2cpp::create_object<app::CameraFilterPack_FX_Grid>(get_class());
        }
    } // namespace CameraFilterPack_FX_Grid
} // namespace app::classes::types

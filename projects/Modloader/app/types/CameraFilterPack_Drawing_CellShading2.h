#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraFilterPack_Drawing_CellShading2 {
        inline app::CameraFilterPack_Drawing_CellShading2__Class** type_info = (app::CameraFilterPack_Drawing_CellShading2__Class**)(modloader::win::memory::resolve_rva(0x0472EA10));
        inline app::CameraFilterPack_Drawing_CellShading2__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Drawing_CellShading2__Class>(type_info, "", "CameraFilterPack_Drawing_CellShading2");
        }
        inline app::CameraFilterPack_Drawing_CellShading2* create() {
            return il2cpp::create_object<app::CameraFilterPack_Drawing_CellShading2>(get_class());
        }
    } // namespace CameraFilterPack_Drawing_CellShading2
} // namespace app::classes::types

#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CameraFilterPack_Drawing_CellShading__Class.h>
#include <Modloader/app/structs/CameraFilterPack_Drawing_CellShading.h>

namespace app::classes::types {
    namespace CameraFilterPack_Drawing_CellShading {
        inline app::CameraFilterPack_Drawing_CellShading__Class** type_info = (app::CameraFilterPack_Drawing_CellShading__Class**)(modloader::win::memory::resolve_rva(0x047750F0));
        inline app::CameraFilterPack_Drawing_CellShading__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Drawing_CellShading__Class>(type_info, "", "CameraFilterPack_Drawing_CellShading");
        }
        inline app::CameraFilterPack_Drawing_CellShading* create() {
            return il2cpp::create_object<app::CameraFilterPack_Drawing_CellShading>(get_class());
        }
    } // namespace CameraFilterPack_Drawing_CellShading
} // namespace app::classes::types

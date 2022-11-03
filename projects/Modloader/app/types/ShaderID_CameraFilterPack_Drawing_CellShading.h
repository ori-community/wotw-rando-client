#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_Drawing_CellShading {
        inline app::ShaderID_CameraFilterPack_Drawing_CellShading__Class** type_info = (app::ShaderID_CameraFilterPack_Drawing_CellShading__Class**)(modloader::win::memory::resolve_rva(0x0475B8B0));
        inline app::ShaderID_CameraFilterPack_Drawing_CellShading__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_Drawing_CellShading__Class>(type_info, "", "ShaderID_CameraFilterPack_Drawing_CellShading");
        }
        inline app::ShaderID_CameraFilterPack_Drawing_CellShading* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_Drawing_CellShading>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_Drawing_CellShading
} // namespace app::classes::types

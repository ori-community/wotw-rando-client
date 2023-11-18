#pragma once
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Drawing_NewCellShading.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Drawing_NewCellShading__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_Drawing_NewCellShading {
        inline app::ShaderID_CameraFilterPack_Drawing_NewCellShading__Class** type_info() {
            static app::ShaderID_CameraFilterPack_Drawing_NewCellShading__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_CameraFilterPack_Drawing_NewCellShading__Class**)(modloader::win::memory::resolve_rva(0x04752DC0));
            }
            return cache;
        }
        inline app::ShaderID_CameraFilterPack_Drawing_NewCellShading__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_Drawing_NewCellShading__Class>(type_info(), "", "ShaderID_CameraFilterPack_Drawing_NewCellShading");
        }
        inline app::ShaderID_CameraFilterPack_Drawing_NewCellShading* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_Drawing_NewCellShading>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_Drawing_NewCellShading
} // namespace app::classes::types

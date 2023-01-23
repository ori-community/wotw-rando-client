#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Drawing_Paper__Class.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Drawing_Paper.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_Drawing_Paper {
        inline app::ShaderID_CameraFilterPack_Drawing_Paper__Class** type_info = (app::ShaderID_CameraFilterPack_Drawing_Paper__Class**)(modloader::win::memory::resolve_rva(0x047723A8));
        inline app::ShaderID_CameraFilterPack_Drawing_Paper__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_Drawing_Paper__Class>(type_info, "", "ShaderID_CameraFilterPack_Drawing_Paper");
        }
        inline app::ShaderID_CameraFilterPack_Drawing_Paper* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_Drawing_Paper>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_Drawing_Paper
} // namespace app::classes::types

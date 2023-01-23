#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Drawing_Toon__Class.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Drawing_Toon.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_Drawing_Toon {
        inline app::ShaderID_CameraFilterPack_Drawing_Toon__Class** type_info = (app::ShaderID_CameraFilterPack_Drawing_Toon__Class**)(modloader::win::memory::resolve_rva(0x0477AD48));
        inline app::ShaderID_CameraFilterPack_Drawing_Toon__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_Drawing_Toon__Class>(type_info, "", "ShaderID_CameraFilterPack_Drawing_Toon");
        }
        inline app::ShaderID_CameraFilterPack_Drawing_Toon* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_Drawing_Toon>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_Drawing_Toon
} // namespace app::classes::types

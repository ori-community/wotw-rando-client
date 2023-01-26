#pragma once
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Drawing_Toon.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Drawing_Toon__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_Drawing_Toon {
        inline app::ShaderID_CameraFilterPack_Drawing_Toon__Class** type_info() {
            static app::ShaderID_CameraFilterPack_Drawing_Toon__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_CameraFilterPack_Drawing_Toon__Class**)(modloader::win::memory::resolve_rva(0x0477AD48));
            }
            return cache;
        }
        inline app::ShaderID_CameraFilterPack_Drawing_Toon__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_Drawing_Toon__Class>(type_info(), "", "ShaderID_CameraFilterPack_Drawing_Toon");
        }
        inline app::ShaderID_CameraFilterPack_Drawing_Toon* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_Drawing_Toon>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_Drawing_Toon
} // namespace app::classes::types

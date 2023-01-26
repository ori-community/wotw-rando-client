#pragma once
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Drawing_Manga3.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Drawing_Manga3__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_Drawing_Manga3 {
        inline app::ShaderID_CameraFilterPack_Drawing_Manga3__Class** type_info() {
            static app::ShaderID_CameraFilterPack_Drawing_Manga3__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_CameraFilterPack_Drawing_Manga3__Class**)(modloader::win::memory::resolve_rva(0x047063E8));
            }
            return cache;
        }
        inline app::ShaderID_CameraFilterPack_Drawing_Manga3__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_Drawing_Manga3__Class>(type_info(), "", "ShaderID_CameraFilterPack_Drawing_Manga3");
        }
        inline app::ShaderID_CameraFilterPack_Drawing_Manga3* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_Drawing_Manga3>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_Drawing_Manga3
} // namespace app::classes::types

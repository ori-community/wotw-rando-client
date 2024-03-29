#pragma once
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Drawing_Manga5.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Drawing_Manga5__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_Drawing_Manga5 {
        inline app::ShaderID_CameraFilterPack_Drawing_Manga5__Class** type_info() {
            static app::ShaderID_CameraFilterPack_Drawing_Manga5__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_CameraFilterPack_Drawing_Manga5__Class**)(modloader::win::memory::resolve_rva(0x04780D38));
            }
            return cache;
        }
        inline app::ShaderID_CameraFilterPack_Drawing_Manga5__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_Drawing_Manga5__Class>(type_info(), "", "ShaderID_CameraFilterPack_Drawing_Manga5");
        }
        inline app::ShaderID_CameraFilterPack_Drawing_Manga5* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_Drawing_Manga5>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_Drawing_Manga5
} // namespace app::classes::types

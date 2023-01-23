#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Drawing_Manga4__Class.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Drawing_Manga4.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_Drawing_Manga4 {
        inline app::ShaderID_CameraFilterPack_Drawing_Manga4__Class** type_info = (app::ShaderID_CameraFilterPack_Drawing_Manga4__Class**)(modloader::win::memory::resolve_rva(0x047643D8));
        inline app::ShaderID_CameraFilterPack_Drawing_Manga4__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_Drawing_Manga4__Class>(type_info, "", "ShaderID_CameraFilterPack_Drawing_Manga4");
        }
        inline app::ShaderID_CameraFilterPack_Drawing_Manga4* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_Drawing_Manga4>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_Drawing_Manga4
} // namespace app::classes::types

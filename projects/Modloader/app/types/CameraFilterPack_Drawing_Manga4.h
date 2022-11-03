#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraFilterPack_Drawing_Manga4 {
        inline app::CameraFilterPack_Drawing_Manga4__Class** type_info = (app::CameraFilterPack_Drawing_Manga4__Class**)(modloader::win::memory::resolve_rva(0x04758DE0));
        inline app::CameraFilterPack_Drawing_Manga4__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Drawing_Manga4__Class>(type_info, "", "CameraFilterPack_Drawing_Manga4");
        }
        inline app::CameraFilterPack_Drawing_Manga4* create() {
            return il2cpp::create_object<app::CameraFilterPack_Drawing_Manga4>(get_class());
        }
    } // namespace CameraFilterPack_Drawing_Manga4
} // namespace app::classes::types

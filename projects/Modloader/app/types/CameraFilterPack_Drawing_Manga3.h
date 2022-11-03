#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraFilterPack_Drawing_Manga3 {
        inline app::CameraFilterPack_Drawing_Manga3__Class** type_info = (app::CameraFilterPack_Drawing_Manga3__Class**)(modloader::win::memory::resolve_rva(0x04761F80));
        inline app::CameraFilterPack_Drawing_Manga3__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Drawing_Manga3__Class>(type_info, "", "CameraFilterPack_Drawing_Manga3");
        }
        inline app::CameraFilterPack_Drawing_Manga3* create() {
            return il2cpp::create_object<app::CameraFilterPack_Drawing_Manga3>(get_class());
        }
    } // namespace CameraFilterPack_Drawing_Manga3
} // namespace app::classes::types

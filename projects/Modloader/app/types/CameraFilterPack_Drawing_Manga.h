#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CameraFilterPack_Drawing_Manga__Class.h>
#include <Modloader/app/structs/CameraFilterPack_Drawing_Manga.h>

namespace app::classes::types {
    namespace CameraFilterPack_Drawing_Manga {
        inline app::CameraFilterPack_Drawing_Manga__Class** type_info = (app::CameraFilterPack_Drawing_Manga__Class**)(modloader::win::memory::resolve_rva(0x0470F930));
        inline app::CameraFilterPack_Drawing_Manga__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Drawing_Manga__Class>(type_info, "", "CameraFilterPack_Drawing_Manga");
        }
        inline app::CameraFilterPack_Drawing_Manga* create() {
            return il2cpp::create_object<app::CameraFilterPack_Drawing_Manga>(get_class());
        }
    } // namespace CameraFilterPack_Drawing_Manga
} // namespace app::classes::types

#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CameraFilterPack_Drawing_Manga_FlashWhite__Class.h>
#include <Modloader/app/structs/CameraFilterPack_Drawing_Manga_FlashWhite.h>

namespace app::classes::types {
    namespace CameraFilterPack_Drawing_Manga_FlashWhite {
        inline app::CameraFilterPack_Drawing_Manga_FlashWhite__Class** type_info = (app::CameraFilterPack_Drawing_Manga_FlashWhite__Class**)(modloader::win::memory::resolve_rva(0x0473FBA0));
        inline app::CameraFilterPack_Drawing_Manga_FlashWhite__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Drawing_Manga_FlashWhite__Class>(type_info, "", "CameraFilterPack_Drawing_Manga_FlashWhite");
        }
        inline app::CameraFilterPack_Drawing_Manga_FlashWhite* create() {
            return il2cpp::create_object<app::CameraFilterPack_Drawing_Manga_FlashWhite>(get_class());
        }
    } // namespace CameraFilterPack_Drawing_Manga_FlashWhite
} // namespace app::classes::types

#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_Drawing_Manga_FlashWhite {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CameraFilterPack_Drawing_Manga_FlashWhite__Class** type_info;
        inline app::CameraFilterPack_Drawing_Manga_FlashWhite__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Drawing_Manga_FlashWhite__Class>(type_info, "", "CameraFilterPack_Drawing_Manga_FlashWhite");
        }
        inline app::CameraFilterPack_Drawing_Manga_FlashWhite* create() {
            return il2cpp::create_object<app::CameraFilterPack_Drawing_Manga_FlashWhite>(get_class());
        }
    } // namespace CameraFilterPack_Drawing_Manga_FlashWhite
} // namespace app::classes::types

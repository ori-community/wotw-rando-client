#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraFilterPack_Drawing_Manga_Flash_Color {
        inline app::CameraFilterPack_Drawing_Manga_Flash_Color__Class** type_info = (app::CameraFilterPack_Drawing_Manga_Flash_Color__Class**)(modloader::win::memory::resolve_rva(0x04714EA8));
        inline app::CameraFilterPack_Drawing_Manga_Flash_Color__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Drawing_Manga_Flash_Color__Class>(type_info, "", "CameraFilterPack_Drawing_Manga_Flash_Color");
        }
        inline app::CameraFilterPack_Drawing_Manga_Flash_Color* create() {
            return il2cpp::create_object<app::CameraFilterPack_Drawing_Manga_Flash_Color>(get_class());
        }
    } // namespace CameraFilterPack_Drawing_Manga_Flash_Color
} // namespace app::classes::types

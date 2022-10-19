#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraFilterPack_Drawing_Manga_Flash {
        inline app::CameraFilterPack_Drawing_Manga_Flash__Class** type_info = (app::CameraFilterPack_Drawing_Manga_Flash__Class**)(modloader::win::memory::resolve_rva(0x04703498));
        inline app::CameraFilterPack_Drawing_Manga_Flash__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Drawing_Manga_Flash__Class>(type_info, "", "CameraFilterPack_Drawing_Manga_Flash");
        }
        inline app::CameraFilterPack_Drawing_Manga_Flash* create() {
            return il2cpp::create_object<app::CameraFilterPack_Drawing_Manga_Flash>(get_class());
        }
    } // namespace CameraFilterPack_Drawing_Manga_Flash
} // namespace app::classes::types

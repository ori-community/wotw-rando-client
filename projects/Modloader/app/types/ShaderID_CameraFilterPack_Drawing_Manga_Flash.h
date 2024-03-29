#pragma once
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Drawing_Manga_Flash.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Drawing_Manga_Flash__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_Drawing_Manga_Flash {
        inline app::ShaderID_CameraFilterPack_Drawing_Manga_Flash__Class** type_info() {
            static app::ShaderID_CameraFilterPack_Drawing_Manga_Flash__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_CameraFilterPack_Drawing_Manga_Flash__Class**)(modloader::win::memory::resolve_rva(0x0474E4A8));
            }
            return cache;
        }
        inline app::ShaderID_CameraFilterPack_Drawing_Manga_Flash__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_Drawing_Manga_Flash__Class>(type_info(), "", "ShaderID_CameraFilterPack_Drawing_Manga_Flash");
        }
        inline app::ShaderID_CameraFilterPack_Drawing_Manga_Flash* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_Drawing_Manga_Flash>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_Drawing_Manga_Flash
} // namespace app::classes::types

#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Drawing_Manga_FlashWhite__Class.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Drawing_Manga_FlashWhite.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_Drawing_Manga_FlashWhite {
        inline app::ShaderID_CameraFilterPack_Drawing_Manga_FlashWhite__Class** type_info = (app::ShaderID_CameraFilterPack_Drawing_Manga_FlashWhite__Class**)(modloader::win::memory::resolve_rva(0x0476A6C0));
        inline app::ShaderID_CameraFilterPack_Drawing_Manga_FlashWhite__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_Drawing_Manga_FlashWhite__Class>(type_info, "", "ShaderID_CameraFilterPack_Drawing_Manga_FlashWhite");
        }
        inline app::ShaderID_CameraFilterPack_Drawing_Manga_FlashWhite* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_Drawing_Manga_FlashWhite>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_Drawing_Manga_FlashWhite
} // namespace app::classes::types

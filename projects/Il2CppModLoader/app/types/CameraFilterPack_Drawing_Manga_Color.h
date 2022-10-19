#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraFilterPack_Drawing_Manga_Color {
        inline app::CameraFilterPack_Drawing_Manga_Color__Class** type_info = (app::CameraFilterPack_Drawing_Manga_Color__Class**)(modloader::win::memory::resolve_rva(0x04710C70));
        inline app::CameraFilterPack_Drawing_Manga_Color__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Drawing_Manga_Color__Class>(type_info, "", "CameraFilterPack_Drawing_Manga_Color");
        }
        inline app::CameraFilterPack_Drawing_Manga_Color* create() {
            return il2cpp::create_object<app::CameraFilterPack_Drawing_Manga_Color>(get_class());
        }
    } // namespace CameraFilterPack_Drawing_Manga_Color
} // namespace app::classes::types

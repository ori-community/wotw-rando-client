#pragma once
#include <Modloader/app/structs/CameraFilterPack_Drawing_Manga_Color.h>
#include <Modloader/app/structs/CameraFilterPack_Drawing_Manga_Color__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_Drawing_Manga_Color {
        inline app::CameraFilterPack_Drawing_Manga_Color__Class** type_info() {
            static app::CameraFilterPack_Drawing_Manga_Color__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CameraFilterPack_Drawing_Manga_Color__Class**)(modloader::win::memory::resolve_rva(0x04710C70));
            }
            return cache;
        }
        inline app::CameraFilterPack_Drawing_Manga_Color__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Drawing_Manga_Color__Class>(type_info(), "", "CameraFilterPack_Drawing_Manga_Color");
        }
        inline app::CameraFilterPack_Drawing_Manga_Color* create() {
            return il2cpp::create_object<app::CameraFilterPack_Drawing_Manga_Color>(get_class());
        }
    } // namespace CameraFilterPack_Drawing_Manga_Color
} // namespace app::classes::types

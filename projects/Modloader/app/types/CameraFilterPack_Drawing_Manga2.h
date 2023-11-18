#pragma once
#include <Modloader/app/structs/CameraFilterPack_Drawing_Manga2.h>
#include <Modloader/app/structs/CameraFilterPack_Drawing_Manga2__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_Drawing_Manga2 {
        inline app::CameraFilterPack_Drawing_Manga2__Class** type_info() {
            static app::CameraFilterPack_Drawing_Manga2__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CameraFilterPack_Drawing_Manga2__Class**)(modloader::win::memory::resolve_rva(0x0473CF80));
            }
            return cache;
        }
        inline app::CameraFilterPack_Drawing_Manga2__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Drawing_Manga2__Class>(type_info(), "", "CameraFilterPack_Drawing_Manga2");
        }
        inline app::CameraFilterPack_Drawing_Manga2* create() {
            return il2cpp::create_object<app::CameraFilterPack_Drawing_Manga2>(get_class());
        }
    } // namespace CameraFilterPack_Drawing_Manga2
} // namespace app::classes::types

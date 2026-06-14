#pragma once
#include <Modloader/app/structs/CameraFilterPack_Drawing_Manga3.h>
#include <Modloader/app/structs/CameraFilterPack_Drawing_Manga3__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_Drawing_Manga3 {
        inline app::CameraFilterPack_Drawing_Manga3__Class** type_info() {
            static app::CameraFilterPack_Drawing_Manga3__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CameraFilterPack_Drawing_Manga3__Class**)(modloader::win::memory::resolve_rva(0x04761F80));
            }
            return cache;
        }
        inline app::CameraFilterPack_Drawing_Manga3__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Drawing_Manga3__Class>(type_info(), "", "CameraFilterPack_Drawing_Manga3");
        }
        inline app::CameraFilterPack_Drawing_Manga3* create() {
            return il2cpp::create_object<app::CameraFilterPack_Drawing_Manga3>(get_class());
        }
    } // namespace CameraFilterPack_Drawing_Manga3
} // namespace app::classes::types

#pragma once
#include <Modloader/app/structs/CameraFilterPack_Drawing_Manga4.h>
#include <Modloader/app/structs/CameraFilterPack_Drawing_Manga4__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_Drawing_Manga4 {
        inline app::CameraFilterPack_Drawing_Manga4__Class** type_info() {
            static app::CameraFilterPack_Drawing_Manga4__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CameraFilterPack_Drawing_Manga4__Class**)(modloader::win::memory::resolve_rva(0x04758DE0));
            }
            return cache;
        }
        inline app::CameraFilterPack_Drawing_Manga4__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Drawing_Manga4__Class>(type_info(), "", "CameraFilterPack_Drawing_Manga4");
        }
        inline app::CameraFilterPack_Drawing_Manga4* create() {
            return il2cpp::create_object<app::CameraFilterPack_Drawing_Manga4>(get_class());
        }
    } // namespace CameraFilterPack_Drawing_Manga4
} // namespace app::classes::types

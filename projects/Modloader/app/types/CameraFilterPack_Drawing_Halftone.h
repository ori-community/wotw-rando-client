#pragma once
#include <Modloader/app/structs/CameraFilterPack_Drawing_Halftone.h>
#include <Modloader/app/structs/CameraFilterPack_Drawing_Halftone__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_Drawing_Halftone {
        inline app::CameraFilterPack_Drawing_Halftone__Class** type_info() {
            static app::CameraFilterPack_Drawing_Halftone__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CameraFilterPack_Drawing_Halftone__Class**)(modloader::win::memory::resolve_rva(0x0474FD98));
            }
            return cache;
        }
        inline app::CameraFilterPack_Drawing_Halftone__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Drawing_Halftone__Class>(type_info(), "", "CameraFilterPack_Drawing_Halftone");
        }
        inline app::CameraFilterPack_Drawing_Halftone* create() {
            return il2cpp::create_object<app::CameraFilterPack_Drawing_Halftone>(get_class());
        }
    } // namespace CameraFilterPack_Drawing_Halftone
} // namespace app::classes::types

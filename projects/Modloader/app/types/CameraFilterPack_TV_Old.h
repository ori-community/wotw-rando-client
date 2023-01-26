#pragma once
#include <Modloader/app/structs/CameraFilterPack_TV_Old.h>
#include <Modloader/app/structs/CameraFilterPack_TV_Old__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_TV_Old {
        inline app::CameraFilterPack_TV_Old__Class** type_info() {
            static app::CameraFilterPack_TV_Old__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CameraFilterPack_TV_Old__Class**)(modloader::win::memory::resolve_rva(0x0478F278));
            }
            return cache;
        }
        inline app::CameraFilterPack_TV_Old__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_TV_Old__Class>(type_info(), "", "CameraFilterPack_TV_Old");
        }
        inline app::CameraFilterPack_TV_Old* create() {
            return il2cpp::create_object<app::CameraFilterPack_TV_Old>(get_class());
        }
    } // namespace CameraFilterPack_TV_Old
} // namespace app::classes::types

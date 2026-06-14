#pragma once
#include <Modloader/app/structs/CameraFilterPack_TV_Old_Movie.h>
#include <Modloader/app/structs/CameraFilterPack_TV_Old_Movie__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_TV_Old_Movie {
        inline app::CameraFilterPack_TV_Old_Movie__Class** type_info() {
            static app::CameraFilterPack_TV_Old_Movie__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CameraFilterPack_TV_Old_Movie__Class**)(modloader::win::memory::resolve_rva(0x04794F18));
            }
            return cache;
        }
        inline app::CameraFilterPack_TV_Old_Movie__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_TV_Old_Movie__Class>(type_info(), "", "CameraFilterPack_TV_Old_Movie");
        }
        inline app::CameraFilterPack_TV_Old_Movie* create() {
            return il2cpp::create_object<app::CameraFilterPack_TV_Old_Movie>(get_class());
        }
    } // namespace CameraFilterPack_TV_Old_Movie
} // namespace app::classes::types

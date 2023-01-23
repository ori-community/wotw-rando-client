#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CameraFilterPack_TV_Old_Movie__Class.h>
#include <Modloader/app/structs/CameraFilterPack_TV_Old_Movie.h>

namespace app::classes::types {
    namespace CameraFilterPack_TV_Old_Movie {
        inline app::CameraFilterPack_TV_Old_Movie__Class** type_info = (app::CameraFilterPack_TV_Old_Movie__Class**)(modloader::win::memory::resolve_rva(0x04794F18));
        inline app::CameraFilterPack_TV_Old_Movie__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_TV_Old_Movie__Class>(type_info, "", "CameraFilterPack_TV_Old_Movie");
        }
        inline app::CameraFilterPack_TV_Old_Movie* create() {
            return il2cpp::create_object<app::CameraFilterPack_TV_Old_Movie>(get_class());
        }
    } // namespace CameraFilterPack_TV_Old_Movie
} // namespace app::classes::types

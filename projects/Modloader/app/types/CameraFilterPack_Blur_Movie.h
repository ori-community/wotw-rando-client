#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CameraFilterPack_Blur_Movie__Class.h>
#include <Modloader/app/structs/CameraFilterPack_Blur_Movie.h>

namespace app::classes::types {
    namespace CameraFilterPack_Blur_Movie {
        inline app::CameraFilterPack_Blur_Movie__Class** type_info = (app::CameraFilterPack_Blur_Movie__Class**)(modloader::win::memory::resolve_rva(0x047157C0));
        inline app::CameraFilterPack_Blur_Movie__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Blur_Movie__Class>(type_info, "", "CameraFilterPack_Blur_Movie");
        }
        inline app::CameraFilterPack_Blur_Movie* create() {
            return il2cpp::create_object<app::CameraFilterPack_Blur_Movie>(get_class());
        }
    } // namespace CameraFilterPack_Blur_Movie
} // namespace app::classes::types

#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraFilterPack_TV_Old_Movie_2 {
        inline app::CameraFilterPack_TV_Old_Movie_2__Class** type_info = (app::CameraFilterPack_TV_Old_Movie_2__Class**)(modloader::win::memory::resolve_rva(0x0475DC70));
        inline app::CameraFilterPack_TV_Old_Movie_2__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_TV_Old_Movie_2__Class>(type_info, "", "CameraFilterPack_TV_Old_Movie_2");
        }
        inline app::CameraFilterPack_TV_Old_Movie_2* create() {
            return il2cpp::create_object<app::CameraFilterPack_TV_Old_Movie_2>(get_class());
        }
    } // namespace CameraFilterPack_TV_Old_Movie_2
} // namespace app::classes::types

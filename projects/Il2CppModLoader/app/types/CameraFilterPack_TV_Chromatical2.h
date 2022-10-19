#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraFilterPack_TV_Chromatical2 {
        inline app::CameraFilterPack_TV_Chromatical2__Class** type_info = (app::CameraFilterPack_TV_Chromatical2__Class**)(modloader::win::memory::resolve_rva(0x04753340));
        inline app::CameraFilterPack_TV_Chromatical2__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_TV_Chromatical2__Class>(type_info, "", "CameraFilterPack_TV_Chromatical2");
        }
        inline app::CameraFilterPack_TV_Chromatical2* create() {
            return il2cpp::create_object<app::CameraFilterPack_TV_Chromatical2>(get_class());
        }
    } // namespace CameraFilterPack_TV_Chromatical2
} // namespace app::classes::types

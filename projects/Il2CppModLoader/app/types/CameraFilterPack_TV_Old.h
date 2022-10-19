#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraFilterPack_TV_Old {
        inline app::CameraFilterPack_TV_Old__Class** type_info = (app::CameraFilterPack_TV_Old__Class**)(modloader::win::memory::resolve_rva(0x0478F278));
        inline app::CameraFilterPack_TV_Old__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_TV_Old__Class>(type_info, "", "CameraFilterPack_TV_Old");
        }
        inline app::CameraFilterPack_TV_Old* create() {
            return il2cpp::create_object<app::CameraFilterPack_TV_Old>(get_class());
        }
    } // namespace CameraFilterPack_TV_Old
} // namespace app::classes::types

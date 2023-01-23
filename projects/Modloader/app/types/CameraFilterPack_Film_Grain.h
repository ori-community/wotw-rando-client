#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CameraFilterPack_Film_Grain__Class.h>
#include <Modloader/app/structs/CameraFilterPack_Film_Grain.h>

namespace app::classes::types {
    namespace CameraFilterPack_Film_Grain {
        inline app::CameraFilterPack_Film_Grain__Class** type_info = (app::CameraFilterPack_Film_Grain__Class**)(modloader::win::memory::resolve_rva(0x0478E348));
        inline app::CameraFilterPack_Film_Grain__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Film_Grain__Class>(type_info, "", "CameraFilterPack_Film_Grain");
        }
        inline app::CameraFilterPack_Film_Grain* create() {
            return il2cpp::create_object<app::CameraFilterPack_Film_Grain>(get_class());
        }
    } // namespace CameraFilterPack_Film_Grain
} // namespace app::classes::types

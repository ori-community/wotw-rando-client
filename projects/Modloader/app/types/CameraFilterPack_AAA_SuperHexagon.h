#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraFilterPack_AAA_SuperHexagon {
        inline app::CameraFilterPack_AAA_SuperHexagon__Class** type_info = (app::CameraFilterPack_AAA_SuperHexagon__Class**)(modloader::win::memory::resolve_rva(0x0474E7F8));
        inline app::CameraFilterPack_AAA_SuperHexagon__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_AAA_SuperHexagon__Class>(type_info, "", "CameraFilterPack_AAA_SuperHexagon");
        }
        inline app::CameraFilterPack_AAA_SuperHexagon* create() {
            return il2cpp::create_object<app::CameraFilterPack_AAA_SuperHexagon>(get_class());
        }
    } // namespace CameraFilterPack_AAA_SuperHexagon
} // namespace app::classes::types

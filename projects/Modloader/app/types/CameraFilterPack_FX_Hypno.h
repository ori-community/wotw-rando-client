#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraFilterPack_FX_Hypno {
        inline app::CameraFilterPack_FX_Hypno__Class** type_info = (app::CameraFilterPack_FX_Hypno__Class**)(modloader::win::memory::resolve_rva(0x04796248));
        inline app::CameraFilterPack_FX_Hypno__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_FX_Hypno__Class>(type_info, "", "CameraFilterPack_FX_Hypno");
        }
        inline app::CameraFilterPack_FX_Hypno* create() {
            return il2cpp::create_object<app::CameraFilterPack_FX_Hypno>(get_class());
        }
    } // namespace CameraFilterPack_FX_Hypno
} // namespace app::classes::types

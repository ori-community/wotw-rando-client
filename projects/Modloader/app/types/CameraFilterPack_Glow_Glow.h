#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CameraFilterPack_Glow_Glow__Class.h>
#include <Modloader/app/structs/CameraFilterPack_Glow_Glow.h>

namespace app::classes::types {
    namespace CameraFilterPack_Glow_Glow {
        inline app::CameraFilterPack_Glow_Glow__Class** type_info = (app::CameraFilterPack_Glow_Glow__Class**)(modloader::win::memory::resolve_rva(0x0477D670));
        inline app::CameraFilterPack_Glow_Glow__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Glow_Glow__Class>(type_info, "", "CameraFilterPack_Glow_Glow");
        }
        inline app::CameraFilterPack_Glow_Glow* create() {
            return il2cpp::create_object<app::CameraFilterPack_Glow_Glow>(get_class());
        }
    } // namespace CameraFilterPack_Glow_Glow
} // namespace app::classes::types

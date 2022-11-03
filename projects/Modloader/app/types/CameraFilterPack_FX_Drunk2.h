#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraFilterPack_FX_Drunk2 {
        inline app::CameraFilterPack_FX_Drunk2__Class** type_info = (app::CameraFilterPack_FX_Drunk2__Class**)(modloader::win::memory::resolve_rva(0x04719910));
        inline app::CameraFilterPack_FX_Drunk2__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_FX_Drunk2__Class>(type_info, "", "CameraFilterPack_FX_Drunk2");
        }
        inline app::CameraFilterPack_FX_Drunk2* create() {
            return il2cpp::create_object<app::CameraFilterPack_FX_Drunk2>(get_class());
        }
    } // namespace CameraFilterPack_FX_Drunk2
} // namespace app::classes::types

#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraFilterPack_Vision_AuraDistortion {
        inline app::CameraFilterPack_Vision_AuraDistortion__Class** type_info = (app::CameraFilterPack_Vision_AuraDistortion__Class**)(modloader::win::memory::resolve_rva(0x0476B300));
        inline app::CameraFilterPack_Vision_AuraDistortion__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Vision_AuraDistortion__Class>(type_info, "", "CameraFilterPack_Vision_AuraDistortion");
        }
        inline app::CameraFilterPack_Vision_AuraDistortion* create() {
            return il2cpp::create_object<app::CameraFilterPack_Vision_AuraDistortion>(get_class());
        }
    } // namespace CameraFilterPack_Vision_AuraDistortion
} // namespace app::classes::types

#pragma once
#include <Modloader/app/structs/CameraFilterPack_Vision_AuraDistortion.h>
#include <Modloader/app/structs/CameraFilterPack_Vision_AuraDistortion__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_Vision_AuraDistortion {
        inline app::CameraFilterPack_Vision_AuraDistortion__Class** type_info() {
            static app::CameraFilterPack_Vision_AuraDistortion__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CameraFilterPack_Vision_AuraDistortion__Class**)(modloader::win::memory::resolve_rva(0x0476B300));
            }
            return cache;
        }
        inline app::CameraFilterPack_Vision_AuraDistortion__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Vision_AuraDistortion__Class>(type_info(), "", "CameraFilterPack_Vision_AuraDistortion");
        }
        inline app::CameraFilterPack_Vision_AuraDistortion* create() {
            return il2cpp::create_object<app::CameraFilterPack_Vision_AuraDistortion>(get_class());
        }
    } // namespace CameraFilterPack_Vision_AuraDistortion
} // namespace app::classes::types

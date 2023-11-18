#pragma once
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Vision_AuraDistortion.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Vision_AuraDistortion__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_Vision_AuraDistortion {
        inline app::ShaderID_CameraFilterPack_Vision_AuraDistortion__Class** type_info() {
            static app::ShaderID_CameraFilterPack_Vision_AuraDistortion__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_CameraFilterPack_Vision_AuraDistortion__Class**)(modloader::win::memory::resolve_rva(0x04729D40));
            }
            return cache;
        }
        inline app::ShaderID_CameraFilterPack_Vision_AuraDistortion__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_Vision_AuraDistortion__Class>(type_info(), "", "ShaderID_CameraFilterPack_Vision_AuraDistortion");
        }
        inline app::ShaderID_CameraFilterPack_Vision_AuraDistortion* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_Vision_AuraDistortion>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_Vision_AuraDistortion
} // namespace app::classes::types

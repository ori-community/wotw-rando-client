#pragma once
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Special_Bubble.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Special_Bubble__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_Special_Bubble {
        inline app::ShaderID_CameraFilterPack_Special_Bubble__Class** type_info() {
            static app::ShaderID_CameraFilterPack_Special_Bubble__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_CameraFilterPack_Special_Bubble__Class**)(modloader::win::memory::resolve_rva(0x04728F70));
            }
            return cache;
        }
        inline app::ShaderID_CameraFilterPack_Special_Bubble__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_Special_Bubble__Class>(type_info(), "", "ShaderID_CameraFilterPack_Special_Bubble");
        }
        inline app::ShaderID_CameraFilterPack_Special_Bubble* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_Special_Bubble>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_Special_Bubble
} // namespace app::classes::types

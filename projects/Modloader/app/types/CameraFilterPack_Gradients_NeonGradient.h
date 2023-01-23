#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CameraFilterPack_Gradients_NeonGradient__Class.h>
#include <Modloader/app/structs/CameraFilterPack_Gradients_NeonGradient.h>

namespace app::classes::types {
    namespace CameraFilterPack_Gradients_NeonGradient {
        namespace {
            inline app::CameraFilterPack_Gradients_NeonGradient__Class* type_info_ref = nullptr;
        }
        inline app::CameraFilterPack_Gradients_NeonGradient__Class** type_info = &type_info_ref;
        inline app::CameraFilterPack_Gradients_NeonGradient__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Gradients_NeonGradient__Class>(type_info, "", "CameraFilterPack_Gradients_NeonGradient");
        }
        inline app::CameraFilterPack_Gradients_NeonGradient* create() {
            return il2cpp::create_object<app::CameraFilterPack_Gradients_NeonGradient>(get_class());
        }
    } // namespace CameraFilterPack_Gradients_NeonGradient
} // namespace app::classes::types

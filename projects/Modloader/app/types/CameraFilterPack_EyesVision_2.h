#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CameraFilterPack_EyesVision_2__Class.h>
#include <Modloader/app/structs/CameraFilterPack_EyesVision_2.h>

namespace app::classes::types {
    namespace CameraFilterPack_EyesVision_2 {
        namespace {
            inline app::CameraFilterPack_EyesVision_2__Class* type_info_ref = nullptr;
        }
        inline app::CameraFilterPack_EyesVision_2__Class** type_info = &type_info_ref;
        inline app::CameraFilterPack_EyesVision_2__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_EyesVision_2__Class>(type_info, "", "CameraFilterPack_EyesVision_2");
        }
        inline app::CameraFilterPack_EyesVision_2* create() {
            return il2cpp::create_object<app::CameraFilterPack_EyesVision_2>(get_class());
        }
    } // namespace CameraFilterPack_EyesVision_2
} // namespace app::classes::types

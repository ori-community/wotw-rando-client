#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CameraFilterPack_Fly_Vision__Class.h>
#include <Modloader/app/structs/CameraFilterPack_Fly_Vision.h>

namespace app::classes::types {
    namespace CameraFilterPack_Fly_Vision {
        namespace {
            inline app::CameraFilterPack_Fly_Vision__Class* type_info_ref = nullptr;
        }
        inline app::CameraFilterPack_Fly_Vision__Class** type_info = &type_info_ref;
        inline app::CameraFilterPack_Fly_Vision__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Fly_Vision__Class>(type_info, "", "CameraFilterPack_Fly_Vision");
        }
        inline app::CameraFilterPack_Fly_Vision* create() {
            return il2cpp::create_object<app::CameraFilterPack_Fly_Vision>(get_class());
        }
    } // namespace CameraFilterPack_Fly_Vision
} // namespace app::classes::types

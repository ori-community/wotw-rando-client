#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CameraFilterPack_NightVision_4__Class.h>
#include <Modloader/app/structs/CameraFilterPack_NightVision_4.h>

namespace app::classes::types {
    namespace CameraFilterPack_NightVision_4 {
        namespace {
            inline app::CameraFilterPack_NightVision_4__Class* type_info_ref = nullptr;
        }
        inline app::CameraFilterPack_NightVision_4__Class** type_info = &type_info_ref;
        inline app::CameraFilterPack_NightVision_4__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_NightVision_4__Class>(type_info, "", "CameraFilterPack_NightVision_4");
        }
        inline app::CameraFilterPack_NightVision_4* create() {
            return il2cpp::create_object<app::CameraFilterPack_NightVision_4>(get_class());
        }
    } // namespace CameraFilterPack_NightVision_4
} // namespace app::classes::types

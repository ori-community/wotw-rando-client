#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraFilterPack_Vision_Blood_Fast {
        namespace {
            inline app::CameraFilterPack_Vision_Blood_Fast__Class* type_info_ref = nullptr;
        }
        inline app::CameraFilterPack_Vision_Blood_Fast__Class** type_info = &type_info_ref;
        inline app::CameraFilterPack_Vision_Blood_Fast__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Vision_Blood_Fast__Class>(type_info, "", "CameraFilterPack_Vision_Blood_Fast");
        }
        inline app::CameraFilterPack_Vision_Blood_Fast* create() {
            return il2cpp::create_object<app::CameraFilterPack_Vision_Blood_Fast>(get_class());
        }
    } // namespace CameraFilterPack_Vision_Blood_Fast
} // namespace app::classes::types

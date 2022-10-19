#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

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

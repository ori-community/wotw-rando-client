#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraFilterPack_FX_Ascii {
        namespace {
            inline app::CameraFilterPack_FX_Ascii__Class* type_info_ref = nullptr;
        }
        inline app::CameraFilterPack_FX_Ascii__Class** type_info = &type_info_ref;
        inline app::CameraFilterPack_FX_Ascii__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_FX_Ascii__Class>(type_info, "", "CameraFilterPack_FX_Ascii");
        }
        inline app::CameraFilterPack_FX_Ascii* create() {
            return il2cpp::create_object<app::CameraFilterPack_FX_Ascii>(get_class());
        }
    } // namespace CameraFilterPack_FX_Ascii
} // namespace app::classes::types

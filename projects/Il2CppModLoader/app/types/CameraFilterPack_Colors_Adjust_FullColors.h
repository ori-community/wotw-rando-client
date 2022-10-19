#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraFilterPack_Colors_Adjust_FullColors {
        namespace {
            inline app::CameraFilterPack_Colors_Adjust_FullColors__Class* type_info_ref = nullptr;
        }
        inline app::CameraFilterPack_Colors_Adjust_FullColors__Class** type_info = &type_info_ref;
        inline app::CameraFilterPack_Colors_Adjust_FullColors__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Colors_Adjust_FullColors__Class>(type_info, "", "CameraFilterPack_Colors_Adjust_FullColors");
        }
        inline app::CameraFilterPack_Colors_Adjust_FullColors* create() {
            return il2cpp::create_object<app::CameraFilterPack_Colors_Adjust_FullColors>(get_class());
        }
    } // namespace CameraFilterPack_Colors_Adjust_FullColors
} // namespace app::classes::types

#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CameraFilterPack_Colors_Adjust_FullColors__Class.h>
#include <Modloader/app/structs/CameraFilterPack_Colors_Adjust_FullColors.h>

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

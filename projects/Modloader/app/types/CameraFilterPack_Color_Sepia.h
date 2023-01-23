#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CameraFilterPack_Color_Sepia__Class.h>
#include <Modloader/app/structs/CameraFilterPack_Color_Sepia.h>

namespace app::classes::types {
    namespace CameraFilterPack_Color_Sepia {
        namespace {
            inline app::CameraFilterPack_Color_Sepia__Class* type_info_ref = nullptr;
        }
        inline app::CameraFilterPack_Color_Sepia__Class** type_info = &type_info_ref;
        inline app::CameraFilterPack_Color_Sepia__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Color_Sepia__Class>(type_info, "", "CameraFilterPack_Color_Sepia");
        }
        inline app::CameraFilterPack_Color_Sepia* create() {
            return il2cpp::create_object<app::CameraFilterPack_Color_Sepia>(get_class());
        }
    } // namespace CameraFilterPack_Color_Sepia
} // namespace app::classes::types

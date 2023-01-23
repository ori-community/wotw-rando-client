#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CameraFilterPack_FX_Hexagon__Class.h>
#include <Modloader/app/structs/CameraFilterPack_FX_Hexagon.h>

namespace app::classes::types {
    namespace CameraFilterPack_FX_Hexagon {
        namespace {
            inline app::CameraFilterPack_FX_Hexagon__Class* type_info_ref = nullptr;
        }
        inline app::CameraFilterPack_FX_Hexagon__Class** type_info = &type_info_ref;
        inline app::CameraFilterPack_FX_Hexagon__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_FX_Hexagon__Class>(type_info, "", "CameraFilterPack_FX_Hexagon");
        }
        inline app::CameraFilterPack_FX_Hexagon* create() {
            return il2cpp::create_object<app::CameraFilterPack_FX_Hexagon>(get_class());
        }
    } // namespace CameraFilterPack_FX_Hexagon
} // namespace app::classes::types

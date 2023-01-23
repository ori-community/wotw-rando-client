#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CameraFilterPack_Colors_Adjust_PreFilters__Class.h>
#include <Modloader/app/structs/CameraFilterPack_Colors_Adjust_PreFilters.h>

namespace app::classes::types {
    namespace CameraFilterPack_Colors_Adjust_PreFilters {
        namespace {
            inline app::CameraFilterPack_Colors_Adjust_PreFilters__Class* type_info_ref = nullptr;
        }
        inline app::CameraFilterPack_Colors_Adjust_PreFilters__Class** type_info = &type_info_ref;
        inline app::CameraFilterPack_Colors_Adjust_PreFilters__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Colors_Adjust_PreFilters__Class>(type_info, "", "CameraFilterPack_Colors_Adjust_PreFilters");
        }
        inline app::CameraFilterPack_Colors_Adjust_PreFilters* create() {
            return il2cpp::create_object<app::CameraFilterPack_Colors_Adjust_PreFilters>(get_class());
        }
    } // namespace CameraFilterPack_Colors_Adjust_PreFilters
} // namespace app::classes::types

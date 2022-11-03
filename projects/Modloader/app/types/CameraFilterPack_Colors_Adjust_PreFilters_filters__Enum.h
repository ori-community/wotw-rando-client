#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraFilterPack_Colors_Adjust_PreFilters_filters__Enum {
        namespace {
            inline app::CameraFilterPack_Colors_Adjust_PreFilters_filters__Enum__Class* type_info_ref = nullptr;
        }
        inline app::CameraFilterPack_Colors_Adjust_PreFilters_filters__Enum__Class** type_info = &type_info_ref;
        inline app::CameraFilterPack_Colors_Adjust_PreFilters_filters__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::CameraFilterPack_Colors_Adjust_PreFilters_filters__Enum__Class>(type_info, "", "CameraFilterPack_Colors_Adjust_PreFilters", "filters");
        }
        inline app::CameraFilterPack_Colors_Adjust_PreFilters_filters__Enum* create() {
            return il2cpp::create_object<app::CameraFilterPack_Colors_Adjust_PreFilters_filters__Enum>(get_class());
        }
    } // namespace CameraFilterPack_Colors_Adjust_PreFilters_filters__Enum
} // namespace app::classes::types

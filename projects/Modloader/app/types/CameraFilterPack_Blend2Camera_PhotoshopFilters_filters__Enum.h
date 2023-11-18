#pragma once
#include <Modloader/app/structs/CameraFilterPack_Blend2Camera_PhotoshopFilters_filters__Enum.h>
#include <Modloader/app/structs/CameraFilterPack_Blend2Camera_PhotoshopFilters_filters__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_Blend2Camera_PhotoshopFilters_filters__Enum {
        inline app::CameraFilterPack_Blend2Camera_PhotoshopFilters_filters__Enum__Class** type_info() {
            static app::CameraFilterPack_Blend2Camera_PhotoshopFilters_filters__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CameraFilterPack_Blend2Camera_PhotoshopFilters_filters__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CameraFilterPack_Blend2Camera_PhotoshopFilters_filters__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::CameraFilterPack_Blend2Camera_PhotoshopFilters_filters__Enum__Class>(type_info(), "", "CameraFilterPack_Blend2Camera_PhotoshopFilters", "filters");
        }
        inline app::CameraFilterPack_Blend2Camera_PhotoshopFilters_filters__Enum* create() {
            return il2cpp::create_object<app::CameraFilterPack_Blend2Camera_PhotoshopFilters_filters__Enum>(get_class());
        }
    } // namespace CameraFilterPack_Blend2Camera_PhotoshopFilters_filters__Enum
} // namespace app::classes::types

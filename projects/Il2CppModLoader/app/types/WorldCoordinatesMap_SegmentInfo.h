#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WorldCoordinatesMap_SegmentInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::WorldCoordinatesMap_SegmentInfo__Class** type_info;
        inline app::WorldCoordinatesMap_SegmentInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::WorldCoordinatesMap_SegmentInfo__Class>(type_info, "", "WorldCoordinatesMap", "SegmentInfo");
        }
        inline app::WorldCoordinatesMap_SegmentInfo* create() {
            return il2cpp::create_object<app::WorldCoordinatesMap_SegmentInfo>(get_class());
        }
        inline app::WorldCoordinatesMap_SegmentInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::WorldCoordinatesMap_SegmentInfo__Array>(get_class(), size);
        }
        inline app::WorldCoordinatesMap_SegmentInfo__Array* create_array(const std::vector<app::WorldCoordinatesMap_SegmentInfo*>& items) {
            return il2cpp::array_new<app::WorldCoordinatesMap_SegmentInfo__Array>(get_class(), items);
        }
    } // namespace WorldCoordinatesMap_SegmentInfo
} // namespace app::classes::types

#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/WorldCoordinatesMap_SegmentInfo__Class.h>
#include <Modloader/app/structs/WorldCoordinatesMap_SegmentInfo.h>
#include <Modloader/app/structs/WorldCoordinatesMap_SegmentInfo__Array.h>

namespace app::classes::types {
    namespace WorldCoordinatesMap_SegmentInfo {
        inline app::WorldCoordinatesMap_SegmentInfo__Class** type_info = (app::WorldCoordinatesMap_SegmentInfo__Class**)(modloader::win::memory::resolve_rva(0x0473B1D0));
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

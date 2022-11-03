#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace WorldCoordinatesMap_SegmentInfo__Array {
        inline app::WorldCoordinatesMap_SegmentInfo__Array__Class** type_info = (app::WorldCoordinatesMap_SegmentInfo__Array__Class**)(modloader::win::memory::resolve_rva(0x0471B8E0));
        inline app::WorldCoordinatesMap_SegmentInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::WorldCoordinatesMap_SegmentInfo__Array__Class>(type_info, "", "WorldCoordinatesMap+SegmentInfo[]");
        }
        inline app::WorldCoordinatesMap_SegmentInfo__Array* create() {
            return il2cpp::create_object<app::WorldCoordinatesMap_SegmentInfo__Array>(get_class());
        }
    } // namespace WorldCoordinatesMap_SegmentInfo__Array
} // namespace app::classes::types

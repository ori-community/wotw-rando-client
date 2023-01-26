#pragma once
#include <Modloader/app/structs/WorldCoordinatesMap_SegmentInfo__Array.h>
#include <Modloader/app/structs/WorldCoordinatesMap_SegmentInfo__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WorldCoordinatesMap_SegmentInfo__Array {
        inline app::WorldCoordinatesMap_SegmentInfo__Array__Class** type_info() {
            static app::WorldCoordinatesMap_SegmentInfo__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::WorldCoordinatesMap_SegmentInfo__Array__Class**)(modloader::win::memory::resolve_rva(0x0471B8E0));
            }
            return cache;
        }
        inline app::WorldCoordinatesMap_SegmentInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::WorldCoordinatesMap_SegmentInfo__Array__Class>(type_info(), "", "WorldCoordinatesMap+SegmentInfo[]");
        }
        inline app::WorldCoordinatesMap_SegmentInfo__Array* create() {
            return il2cpp::create_object<app::WorldCoordinatesMap_SegmentInfo__Array>(get_class());
        }
    } // namespace WorldCoordinatesMap_SegmentInfo__Array
} // namespace app::classes::types

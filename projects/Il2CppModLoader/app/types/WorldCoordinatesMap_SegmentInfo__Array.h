#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WorldCoordinatesMap_SegmentInfo__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::WorldCoordinatesMap_SegmentInfo__Array__Class** type_info;
        inline app::WorldCoordinatesMap_SegmentInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::WorldCoordinatesMap_SegmentInfo__Array__Class>(type_info, "", "WorldCoordinatesMap+SegmentInfo[]");
        }
        inline app::WorldCoordinatesMap_SegmentInfo__Array* create() {
            return il2cpp::create_object<app::WorldCoordinatesMap_SegmentInfo__Array>(get_class());
        }
    } // namespace WorldCoordinatesMap_SegmentInfo__Array
} // namespace app::classes::types

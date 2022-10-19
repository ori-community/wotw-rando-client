#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace WorldCoordinatesMap_SegmentDirection__Enum {
        namespace {
            inline app::WorldCoordinatesMap_SegmentDirection__Enum__Class* type_info_ref = nullptr;
        }
        inline app::WorldCoordinatesMap_SegmentDirection__Enum__Class** type_info = &type_info_ref;
        inline app::WorldCoordinatesMap_SegmentDirection__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::WorldCoordinatesMap_SegmentDirection__Enum__Class>(type_info, "", "WorldCoordinatesMap", "SegmentDirection");
        }
        inline app::WorldCoordinatesMap_SegmentDirection__Enum* create() {
            return il2cpp::create_object<app::WorldCoordinatesMap_SegmentDirection__Enum>(get_class());
        }
    } // namespace WorldCoordinatesMap_SegmentDirection__Enum
} // namespace app::classes::types

#pragma once
#include <Modloader/app/structs/SeinSoulFlame_SoulFlamePlacementSafety__Enum.h>
#include <Modloader/app/structs/SeinSoulFlame_SoulFlamePlacementSafety__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinSoulFlame_SoulFlamePlacementSafety__Enum {
        inline app::SeinSoulFlame_SoulFlamePlacementSafety__Enum__Class** type_info() {
            static app::SeinSoulFlame_SoulFlamePlacementSafety__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinSoulFlame_SoulFlamePlacementSafety__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinSoulFlame_SoulFlamePlacementSafety__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinSoulFlame_SoulFlamePlacementSafety__Enum__Class>(type_info(), "", "SeinSoulFlame", "SoulFlamePlacementSafety");
        }
        inline app::SeinSoulFlame_SoulFlamePlacementSafety__Enum* create() {
            return il2cpp::create_object<app::SeinSoulFlame_SoulFlamePlacementSafety__Enum>(get_class());
        }
    } // namespace SeinSoulFlame_SoulFlamePlacementSafety__Enum
} // namespace app::classes::types

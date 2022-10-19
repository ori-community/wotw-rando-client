#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinSoulFlame_SoulFlamePlacementSafety__Enum {
        namespace {
            inline app::SeinSoulFlame_SoulFlamePlacementSafety__Enum__Class* type_info_ref = nullptr;
        }
        inline app::SeinSoulFlame_SoulFlamePlacementSafety__Enum__Class** type_info = &type_info_ref;
        inline app::SeinSoulFlame_SoulFlamePlacementSafety__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinSoulFlame_SoulFlamePlacementSafety__Enum__Class>(type_info, "", "SeinSoulFlame", "SoulFlamePlacementSafety");
        }
        inline app::SeinSoulFlame_SoulFlamePlacementSafety__Enum* create() {
            return il2cpp::create_object<app::SeinSoulFlame_SoulFlamePlacementSafety__Enum>(get_class());
        }
    } // namespace SeinSoulFlame_SoulFlamePlacementSafety__Enum
} // namespace app::classes::types

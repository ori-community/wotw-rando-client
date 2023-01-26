#pragma once
#include <Modloader/app/structs/WorldMapOverworldAreaCondition.h>
#include <Modloader/app/structs/WorldMapOverworldAreaCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WorldMapOverworldAreaCondition {
        inline app::WorldMapOverworldAreaCondition__Class** type_info() {
            static app::WorldMapOverworldAreaCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WorldMapOverworldAreaCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WorldMapOverworldAreaCondition__Class* get_class() {
            return il2cpp::get_class<app::WorldMapOverworldAreaCondition__Class>(type_info(), "", "WorldMapOverworldAreaCondition");
        }
        inline app::WorldMapOverworldAreaCondition* create() {
            return il2cpp::create_object<app::WorldMapOverworldAreaCondition>(get_class());
        }
    } // namespace WorldMapOverworldAreaCondition
} // namespace app::classes::types

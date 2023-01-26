#pragma once
#include <Modloader/app/structs/WorldMapOverworldArea__Array.h>
#include <Modloader/app/structs/WorldMapOverworldArea__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WorldMapOverworldArea__Array {
        inline app::WorldMapOverworldArea__Array__Class** type_info() {
            static app::WorldMapOverworldArea__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WorldMapOverworldArea__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WorldMapOverworldArea__Array__Class* get_class() {
            return il2cpp::get_class<app::WorldMapOverworldArea__Array__Class>(type_info(), "", "WorldMapOverworldArea[]");
        }
        inline app::WorldMapOverworldArea__Array* create() {
            return il2cpp::create_object<app::WorldMapOverworldArea__Array>(get_class());
        }
    } // namespace WorldMapOverworldArea__Array
} // namespace app::classes::types

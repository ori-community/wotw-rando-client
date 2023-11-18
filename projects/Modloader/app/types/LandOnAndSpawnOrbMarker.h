#pragma once
#include <Modloader/app/structs/LandOnAndSpawnOrbMarker.h>
#include <Modloader/app/structs/LandOnAndSpawnOrbMarker__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LandOnAndSpawnOrbMarker {
        inline app::LandOnAndSpawnOrbMarker__Class** type_info() {
            static app::LandOnAndSpawnOrbMarker__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LandOnAndSpawnOrbMarker__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LandOnAndSpawnOrbMarker__Class* get_class() {
            return il2cpp::get_class<app::LandOnAndSpawnOrbMarker__Class>(type_info(), "", "LandOnAndSpawnOrbMarker");
        }
        inline app::LandOnAndSpawnOrbMarker* create() {
            return il2cpp::create_object<app::LandOnAndSpawnOrbMarker>(get_class());
        }
    } // namespace LandOnAndSpawnOrbMarker
} // namespace app::classes::types

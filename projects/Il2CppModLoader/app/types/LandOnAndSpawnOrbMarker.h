#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LandOnAndSpawnOrbMarker {
        namespace {
            inline app::LandOnAndSpawnOrbMarker__Class* type_info_ref = nullptr;
        }
        inline app::LandOnAndSpawnOrbMarker__Class** type_info = &type_info_ref;
        inline app::LandOnAndSpawnOrbMarker__Class* get_class() {
            return il2cpp::get_class<app::LandOnAndSpawnOrbMarker__Class>(type_info, "", "LandOnAndSpawnOrbMarker");
        }
        inline app::LandOnAndSpawnOrbMarker* create() {
            return il2cpp::create_object<app::LandOnAndSpawnOrbMarker>(get_class());
        }
    } // namespace LandOnAndSpawnOrbMarker
} // namespace app::classes::types

#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CameraFilterPack_TV_PlanetMars__Class.h>
#include <Modloader/app/structs/CameraFilterPack_TV_PlanetMars.h>

namespace app::classes::types {
    namespace CameraFilterPack_TV_PlanetMars {
        namespace {
            inline app::CameraFilterPack_TV_PlanetMars__Class* type_info_ref = nullptr;
        }
        inline app::CameraFilterPack_TV_PlanetMars__Class** type_info = &type_info_ref;
        inline app::CameraFilterPack_TV_PlanetMars__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_TV_PlanetMars__Class>(type_info, "", "CameraFilterPack_TV_PlanetMars");
        }
        inline app::CameraFilterPack_TV_PlanetMars* create() {
            return il2cpp::create_object<app::CameraFilterPack_TV_PlanetMars>(get_class());
        }
    } // namespace CameraFilterPack_TV_PlanetMars
} // namespace app::classes::types

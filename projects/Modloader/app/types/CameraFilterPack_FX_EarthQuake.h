#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CameraFilterPack_FX_EarthQuake__Class.h>
#include <Modloader/app/structs/CameraFilterPack_FX_EarthQuake.h>

namespace app::classes::types {
    namespace CameraFilterPack_FX_EarthQuake {
        inline app::CameraFilterPack_FX_EarthQuake__Class** type_info = (app::CameraFilterPack_FX_EarthQuake__Class**)(modloader::win::memory::resolve_rva(0x047137F0));
        inline app::CameraFilterPack_FX_EarthQuake__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_FX_EarthQuake__Class>(type_info, "", "CameraFilterPack_FX_EarthQuake");
        }
        inline app::CameraFilterPack_FX_EarthQuake* create() {
            return il2cpp::create_object<app::CameraFilterPack_FX_EarthQuake>(get_class());
        }
    } // namespace CameraFilterPack_FX_EarthQuake
} // namespace app::classes::types

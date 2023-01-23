#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CameraFilterPack_Pixelisation_Dot__Class.h>
#include <Modloader/app/structs/CameraFilterPack_Pixelisation_Dot.h>

namespace app::classes::types {
    namespace CameraFilterPack_Pixelisation_Dot {
        inline app::CameraFilterPack_Pixelisation_Dot__Class** type_info = (app::CameraFilterPack_Pixelisation_Dot__Class**)(modloader::win::memory::resolve_rva(0x04719150));
        inline app::CameraFilterPack_Pixelisation_Dot__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Pixelisation_Dot__Class>(type_info, "", "CameraFilterPack_Pixelisation_Dot");
        }
        inline app::CameraFilterPack_Pixelisation_Dot* create() {
            return il2cpp::create_object<app::CameraFilterPack_Pixelisation_Dot>(get_class());
        }
    } // namespace CameraFilterPack_Pixelisation_Dot
} // namespace app::classes::types

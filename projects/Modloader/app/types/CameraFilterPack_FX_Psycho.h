#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CameraFilterPack_FX_Psycho__Class.h>
#include <Modloader/app/structs/CameraFilterPack_FX_Psycho.h>

namespace app::classes::types {
    namespace CameraFilterPack_FX_Psycho {
        inline app::CameraFilterPack_FX_Psycho__Class** type_info = (app::CameraFilterPack_FX_Psycho__Class**)(modloader::win::memory::resolve_rva(0x04784068));
        inline app::CameraFilterPack_FX_Psycho__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_FX_Psycho__Class>(type_info, "", "CameraFilterPack_FX_Psycho");
        }
        inline app::CameraFilterPack_FX_Psycho* create() {
            return il2cpp::create_object<app::CameraFilterPack_FX_Psycho>(get_class());
        }
    } // namespace CameraFilterPack_FX_Psycho
} // namespace app::classes::types

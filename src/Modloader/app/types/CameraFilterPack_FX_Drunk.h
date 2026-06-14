#pragma once
#include <Modloader/app/structs/CameraFilterPack_FX_Drunk.h>
#include <Modloader/app/structs/CameraFilterPack_FX_Drunk__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_FX_Drunk {
        inline app::CameraFilterPack_FX_Drunk__Class** type_info() {
            static app::CameraFilterPack_FX_Drunk__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CameraFilterPack_FX_Drunk__Class**)(modloader::win::memory::resolve_rva(0x047279B0));
            }
            return cache;
        }
        inline app::CameraFilterPack_FX_Drunk__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_FX_Drunk__Class>(type_info(), "", "CameraFilterPack_FX_Drunk");
        }
        inline app::CameraFilterPack_FX_Drunk* create() {
            return il2cpp::create_object<app::CameraFilterPack_FX_Drunk>(get_class());
        }
    } // namespace CameraFilterPack_FX_Drunk
} // namespace app::classes::types

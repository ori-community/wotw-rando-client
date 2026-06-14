#pragma once
#include <Modloader/app/structs/CameraFilterPack_FX_Drunk2.h>
#include <Modloader/app/structs/CameraFilterPack_FX_Drunk2__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_FX_Drunk2 {
        inline app::CameraFilterPack_FX_Drunk2__Class** type_info() {
            static app::CameraFilterPack_FX_Drunk2__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CameraFilterPack_FX_Drunk2__Class**)(modloader::win::memory::resolve_rva(0x04719910));
            }
            return cache;
        }
        inline app::CameraFilterPack_FX_Drunk2__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_FX_Drunk2__Class>(type_info(), "", "CameraFilterPack_FX_Drunk2");
        }
        inline app::CameraFilterPack_FX_Drunk2* create() {
            return il2cpp::create_object<app::CameraFilterPack_FX_Drunk2>(get_class());
        }
    } // namespace CameraFilterPack_FX_Drunk2
} // namespace app::classes::types

#pragma once
#include <Modloader/app/structs/CameraFilterPack_AAA_SuperHexagon.h>
#include <Modloader/app/structs/CameraFilterPack_AAA_SuperHexagon__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_AAA_SuperHexagon {
        inline app::CameraFilterPack_AAA_SuperHexagon__Class** type_info() {
            static app::CameraFilterPack_AAA_SuperHexagon__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CameraFilterPack_AAA_SuperHexagon__Class**)(modloader::win::memory::resolve_rva(0x0474E7F8));
            }
            return cache;
        }
        inline app::CameraFilterPack_AAA_SuperHexagon__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_AAA_SuperHexagon__Class>(type_info(), "", "CameraFilterPack_AAA_SuperHexagon");
        }
        inline app::CameraFilterPack_AAA_SuperHexagon* create() {
            return il2cpp::create_object<app::CameraFilterPack_AAA_SuperHexagon>(get_class());
        }
    } // namespace CameraFilterPack_AAA_SuperHexagon
} // namespace app::classes::types

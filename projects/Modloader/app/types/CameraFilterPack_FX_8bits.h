#pragma once
#include <Modloader/app/structs/CameraFilterPack_FX_8bits.h>
#include <Modloader/app/structs/CameraFilterPack_FX_8bits__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_FX_8bits {
        inline app::CameraFilterPack_FX_8bits__Class** type_info() {
            static app::CameraFilterPack_FX_8bits__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CameraFilterPack_FX_8bits__Class**)(modloader::win::memory::resolve_rva(0x04757170));
            }
            return cache;
        }
        inline app::CameraFilterPack_FX_8bits__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_FX_8bits__Class>(type_info(), "", "CameraFilterPack_FX_8bits");
        }
        inline app::CameraFilterPack_FX_8bits* create() {
            return il2cpp::create_object<app::CameraFilterPack_FX_8bits>(get_class());
        }
    } // namespace CameraFilterPack_FX_8bits
} // namespace app::classes::types

#pragma once
#include <Modloader/app/structs/CameraFilterPack_Blur_Bloom.h>
#include <Modloader/app/structs/CameraFilterPack_Blur_Bloom__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_Blur_Bloom {
        inline app::CameraFilterPack_Blur_Bloom__Class** type_info() {
            static app::CameraFilterPack_Blur_Bloom__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CameraFilterPack_Blur_Bloom__Class**)(modloader::win::memory::resolve_rva(0x04770DA8));
            }
            return cache;
        }
        inline app::CameraFilterPack_Blur_Bloom__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Blur_Bloom__Class>(type_info(), "", "CameraFilterPack_Blur_Bloom");
        }
        inline app::CameraFilterPack_Blur_Bloom* create() {
            return il2cpp::create_object<app::CameraFilterPack_Blur_Bloom>(get_class());
        }
    } // namespace CameraFilterPack_Blur_Bloom
} // namespace app::classes::types

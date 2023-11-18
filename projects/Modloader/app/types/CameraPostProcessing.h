#pragma once
#include <Modloader/app/structs/CameraPostProcessing.h>
#include <Modloader/app/structs/CameraPostProcessing__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraPostProcessing {
        inline app::CameraPostProcessing__Class** type_info() {
            static app::CameraPostProcessing__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CameraPostProcessing__Class**)(modloader::win::memory::resolve_rva(0x0472E620));
            }
            return cache;
        }
        inline app::CameraPostProcessing__Class* get_class() {
            return il2cpp::get_class<app::CameraPostProcessing__Class>(type_info(), "", "CameraPostProcessing");
        }
        inline app::CameraPostProcessing* create() {
            return il2cpp::create_object<app::CameraPostProcessing>(get_class());
        }
    } // namespace CameraPostProcessing
} // namespace app::classes::types

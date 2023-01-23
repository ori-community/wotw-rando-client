#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CameraFilterPack_FX_DigitalMatrixDistortion__Class.h>
#include <Modloader/app/structs/CameraFilterPack_FX_DigitalMatrixDistortion.h>

namespace app::classes::types {
    namespace CameraFilterPack_FX_DigitalMatrixDistortion {
        inline app::CameraFilterPack_FX_DigitalMatrixDistortion__Class** type_info = (app::CameraFilterPack_FX_DigitalMatrixDistortion__Class**)(modloader::win::memory::resolve_rva(0x0474C248));
        inline app::CameraFilterPack_FX_DigitalMatrixDistortion__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_FX_DigitalMatrixDistortion__Class>(type_info, "", "CameraFilterPack_FX_DigitalMatrixDistortion");
        }
        inline app::CameraFilterPack_FX_DigitalMatrixDistortion* create() {
            return il2cpp::create_object<app::CameraFilterPack_FX_DigitalMatrixDistortion>(get_class());
        }
    } // namespace CameraFilterPack_FX_DigitalMatrixDistortion
} // namespace app::classes::types

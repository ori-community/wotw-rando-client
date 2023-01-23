#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CameraFilterPack_FX_DigitalMatrix__Class.h>
#include <Modloader/app/structs/CameraFilterPack_FX_DigitalMatrix.h>

namespace app::classes::types {
    namespace CameraFilterPack_FX_DigitalMatrix {
        inline app::CameraFilterPack_FX_DigitalMatrix__Class** type_info = (app::CameraFilterPack_FX_DigitalMatrix__Class**)(modloader::win::memory::resolve_rva(0x04774750));
        inline app::CameraFilterPack_FX_DigitalMatrix__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_FX_DigitalMatrix__Class>(type_info, "", "CameraFilterPack_FX_DigitalMatrix");
        }
        inline app::CameraFilterPack_FX_DigitalMatrix* create() {
            return il2cpp::create_object<app::CameraFilterPack_FX_DigitalMatrix>(get_class());
        }
    } // namespace CameraFilterPack_FX_DigitalMatrix
} // namespace app::classes::types

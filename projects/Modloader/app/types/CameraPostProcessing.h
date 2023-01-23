#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CameraPostProcessing__Class.h>
#include <Modloader/app/structs/CameraPostProcessing.h>

namespace app::classes::types {
    namespace CameraPostProcessing {
        inline app::CameraPostProcessing__Class** type_info = (app::CameraPostProcessing__Class**)(modloader::win::memory::resolve_rva(0x0472E620));
        inline app::CameraPostProcessing__Class* get_class() {
            return il2cpp::get_class<app::CameraPostProcessing__Class>(type_info, "", "CameraPostProcessing");
        }
        inline app::CameraPostProcessing* create() {
            return il2cpp::create_object<app::CameraPostProcessing>(get_class());
        }
    } // namespace CameraPostProcessing
} // namespace app::classes::types

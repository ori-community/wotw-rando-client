#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraOffsetController_c {
        inline app::CameraOffsetController_c__Class** type_info = (app::CameraOffsetController_c__Class**)(modloader::win::memory::resolve_rva(0x0471C2C0));
        inline app::CameraOffsetController_c__Class* get_class() {
            return il2cpp::get_nested_class<app::CameraOffsetController_c__Class>(type_info, "", "CameraOffsetController", "<>c");
        }
        inline app::CameraOffsetController_c* create() {
            return il2cpp::create_object<app::CameraOffsetController_c>(get_class());
        }
    } // namespace CameraOffsetController_c
} // namespace app::classes::types

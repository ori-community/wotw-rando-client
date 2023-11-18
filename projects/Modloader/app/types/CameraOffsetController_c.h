#pragma once
#include <Modloader/app/structs/CameraOffsetController_c.h>
#include <Modloader/app/structs/CameraOffsetController_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraOffsetController_c {
        inline app::CameraOffsetController_c__Class** type_info() {
            static app::CameraOffsetController_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CameraOffsetController_c__Class**)(modloader::win::memory::resolve_rva(0x0471C2C0));
            }
            return cache;
        }
        inline app::CameraOffsetController_c__Class* get_class() {
            return il2cpp::get_nested_class<app::CameraOffsetController_c__Class>(type_info(), "", "CameraOffsetController", "<>c");
        }
        inline app::CameraOffsetController_c* create() {
            return il2cpp::create_object<app::CameraOffsetController_c>(get_class());
        }
    } // namespace CameraOffsetController_c
} // namespace app::classes::types

#pragma once
#include <Modloader/app/structs/CameraOffsetController.h>
#include <Modloader/app/structs/CameraOffsetController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraOffsetController {
        inline app::CameraOffsetController__Class** type_info() {
            static app::CameraOffsetController__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CameraOffsetController__Class**)(modloader::win::memory::resolve_rva(0x0474F1F0));
            }
            return cache;
        }
        inline app::CameraOffsetController__Class* get_class() {
            return il2cpp::get_class<app::CameraOffsetController__Class>(type_info(), "", "CameraOffsetController");
        }
        inline app::CameraOffsetController* create() {
            return il2cpp::create_object<app::CameraOffsetController>(get_class());
        }
    } // namespace CameraOffsetController
} // namespace app::classes::types

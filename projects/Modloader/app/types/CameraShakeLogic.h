#pragma once
#include <Modloader/app/structs/CameraShakeLogic.h>
#include <Modloader/app/structs/CameraShakeLogic__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraShakeLogic {
        inline app::CameraShakeLogic__Class** type_info() {
            static app::CameraShakeLogic__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CameraShakeLogic__Class**)(modloader::win::memory::resolve_rva(0x0473BB38));
            }
            return cache;
        }
        inline app::CameraShakeLogic__Class* get_class() {
            return il2cpp::get_class<app::CameraShakeLogic__Class>(type_info(), "", "CameraShakeLogic");
        }
        inline app::CameraShakeLogic* create() {
            return il2cpp::create_object<app::CameraShakeLogic>(get_class());
        }
    } // namespace CameraShakeLogic
} // namespace app::classes::types

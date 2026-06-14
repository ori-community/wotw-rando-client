#pragma once
#include <Modloader/app/structs/CameraShakeModifierContext.h>
#include <Modloader/app/structs/CameraShakeModifierContext__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraShakeModifierContext {
        inline app::CameraShakeModifierContext__Class** type_info() {
            static app::CameraShakeModifierContext__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CameraShakeModifierContext__Class**)(modloader::win::memory::resolve_rva(0x04721EA0));
            }
            return cache;
        }
        inline app::CameraShakeModifierContext__Class* get_class() {
            return il2cpp::get_class<app::CameraShakeModifierContext__Class>(type_info(), "Moon", "CameraShakeModifierContext");
        }
        inline app::CameraShakeModifierContext* create() {
            return il2cpp::create_object<app::CameraShakeModifierContext>(get_class());
        }
    } // namespace CameraShakeModifierContext
} // namespace app::classes::types

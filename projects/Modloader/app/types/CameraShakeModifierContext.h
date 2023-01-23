#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CameraShakeModifierContext__Class.h>
#include <Modloader/app/structs/CameraShakeModifierContext.h>

namespace app::classes::types {
    namespace CameraShakeModifierContext {
        inline app::CameraShakeModifierContext__Class** type_info = (app::CameraShakeModifierContext__Class**)(modloader::win::memory::resolve_rva(0x04721EA0));
        inline app::CameraShakeModifierContext__Class* get_class() {
            return il2cpp::get_class<app::CameraShakeModifierContext__Class>(type_info, "Moon", "CameraShakeModifierContext");
        }
        inline app::CameraShakeModifierContext* create() {
            return il2cpp::create_object<app::CameraShakeModifierContext>(get_class());
        }
    } // namespace CameraShakeModifierContext
} // namespace app::classes::types

#pragma once
#include <Modloader/app/structs/VFXEventAttribute.h>
#include <Modloader/app/structs/VFXEventAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VFXEventAttribute {
        inline app::VFXEventAttribute__Class** type_info() {
            static app::VFXEventAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::VFXEventAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::VFXEventAttribute__Class* get_class() {
            return il2cpp::get_class<app::VFXEventAttribute__Class>(type_info(), "UnityEngine.Experimental.VFX", "VFXEventAttribute");
        }
        inline app::VFXEventAttribute* create() {
            return il2cpp::create_object<app::VFXEventAttribute>(get_class());
        }
    } // namespace VFXEventAttribute
} // namespace app::classes::types

#pragma once
#include <Modloader/app/structs/DynamicMirrorTurningBehaviour.h>
#include <Modloader/app/structs/DynamicMirrorTurningBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DynamicMirrorTurningBehaviour {
        inline app::DynamicMirrorTurningBehaviour__Class** type_info() {
            static app::DynamicMirrorTurningBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DynamicMirrorTurningBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DynamicMirrorTurningBehaviour__Class* get_class() {
            return il2cpp::get_class<app::DynamicMirrorTurningBehaviour__Class>(type_info(), "Moon", "DynamicMirrorTurningBehaviour");
        }
        inline app::DynamicMirrorTurningBehaviour* create() {
            return il2cpp::create_object<app::DynamicMirrorTurningBehaviour>(get_class());
        }
    } // namespace DynamicMirrorTurningBehaviour
} // namespace app::classes::types

#pragma once
#include <Modloader/app/structs/TurningBehaviour.h>
#include <Modloader/app/structs/TurningBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TurningBehaviour {
        inline app::TurningBehaviour__Class** type_info() {
            static app::TurningBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TurningBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TurningBehaviour__Class* get_class() {
            return il2cpp::get_class<app::TurningBehaviour__Class>(type_info(), "Moon", "TurningBehaviour");
        }
        inline app::TurningBehaviour* create() {
            return il2cpp::create_object<app::TurningBehaviour>(get_class());
        }
    } // namespace TurningBehaviour
} // namespace app::classes::types

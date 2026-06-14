#pragma once
#include <Modloader/app/structs/MirroredTurningBehaviour.h>
#include <Modloader/app/structs/MirroredTurningBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MirroredTurningBehaviour {
        inline app::MirroredTurningBehaviour__Class** type_info() {
            static app::MirroredTurningBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MirroredTurningBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MirroredTurningBehaviour__Class* get_class() {
            return il2cpp::get_class<app::MirroredTurningBehaviour__Class>(type_info(), "Moon", "MirroredTurningBehaviour");
        }
        inline app::MirroredTurningBehaviour* create() {
            return il2cpp::create_object<app::MirroredTurningBehaviour>(get_class());
        }
    } // namespace MirroredTurningBehaviour
} // namespace app::classes::types

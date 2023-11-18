#pragma once
#include <Modloader/app/structs/TurningAnimation__Array.h>
#include <Modloader/app/structs/TurningAnimation__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TurningAnimation__Array {
        inline app::TurningAnimation__Array__Class** type_info() {
            static app::TurningAnimation__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TurningAnimation__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TurningAnimation__Array__Class* get_class() {
            return il2cpp::get_class<app::TurningAnimation__Array__Class>(type_info(), "Moon", "TurningAnimation[]");
        }
        inline app::TurningAnimation__Array* create() {
            return il2cpp::create_object<app::TurningAnimation__Array>(get_class());
        }
    } // namespace TurningAnimation__Array
} // namespace app::classes::types

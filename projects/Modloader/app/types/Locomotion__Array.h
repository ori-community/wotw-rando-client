#pragma once
#include <Modloader/app/structs/Locomotion__Array.h>
#include <Modloader/app/structs/Locomotion__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Locomotion__Array {
        inline app::Locomotion__Array__Class** type_info() {
            static app::Locomotion__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Locomotion__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Locomotion__Array__Class* get_class() {
            return il2cpp::get_class<app::Locomotion__Array__Class>(type_info(), "Moon", "Locomotion[]");
        }
        inline app::Locomotion__Array* create() {
            return il2cpp::create_object<app::Locomotion__Array>(get_class());
        }
    } // namespace Locomotion__Array
} // namespace app::classes::types

#pragma once
#include <Modloader/app/structs/Animator__Array.h>
#include <Modloader/app/structs/Animator__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Animator__Array {
        inline app::Animator__Array__Class** type_info() {
            static app::Animator__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Animator__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Animator__Array__Class* get_class() {
            return il2cpp::get_class<app::Animator__Array__Class>(type_info(), "UnityEngine", "Animator[]");
        }
        inline app::Animator__Array* create() {
            return il2cpp::create_object<app::Animator__Array>(get_class());
        }
    } // namespace Animator__Array
} // namespace app::classes::types

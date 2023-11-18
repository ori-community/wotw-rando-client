#pragma once
#include <Modloader/app/structs/SinMovement_Affect__Array.h>
#include <Modloader/app/structs/SinMovement_Affect__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SinMovement_Affect__Array {
        inline app::SinMovement_Affect__Array__Class** type_info() {
            static app::SinMovement_Affect__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SinMovement_Affect__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SinMovement_Affect__Array__Class* get_class() {
            return il2cpp::get_class<app::SinMovement_Affect__Array__Class>(type_info(), "", "SinMovement+Affect[]");
        }
        inline app::SinMovement_Affect__Array* create() {
            return il2cpp::create_object<app::SinMovement_Affect__Array>(get_class());
        }
    } // namespace SinMovement_Affect__Array
} // namespace app::classes::types

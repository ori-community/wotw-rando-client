#pragma once
#include <Modloader/app/structs/UberTransformFollow__Array.h>
#include <Modloader/app/structs/UberTransformFollow__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberTransformFollow__Array {
        inline app::UberTransformFollow__Array__Class** type_info() {
            static app::UberTransformFollow__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberTransformFollow__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberTransformFollow__Array__Class* get_class() {
            return il2cpp::get_class<app::UberTransformFollow__Array__Class>(type_info(), "Moon", "UberTransformFollow[]");
        }
        inline app::UberTransformFollow__Array* create() {
            return il2cpp::create_object<app::UberTransformFollow__Array>(get_class());
        }
    } // namespace UberTransformFollow__Array
} // namespace app::classes::types

#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberTransformFollow__Array {
        namespace {
            app::UberTransformFollow__Array__Class* type_info_ref = nullptr;
        }
        app::UberTransformFollow__Array__Class** type_info = &type_info_ref;
        inline app::UberTransformFollow__Array__Class* get_class() {
            return il2cpp::get_class<app::UberTransformFollow__Array__Class>(type_info, "Moon", "UberTransformFollow[]");
        }
        inline app::UberTransformFollow__Array* create() {
            return il2cpp::create_object<app::UberTransformFollow__Array>(get_class());
        }
    } // namespace UberTransformFollow__Array
} // namespace app::classes::types

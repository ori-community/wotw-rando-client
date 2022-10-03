#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DamageResolver_Rule__Array {
        namespace {
            app::DamageResolver_Rule__Array__Class* type_info_ref = nullptr;
        }
        app::DamageResolver_Rule__Array__Class** type_info = &type_info_ref;
        inline app::DamageResolver_Rule__Array__Class* get_class() {
            return il2cpp::get_class<app::DamageResolver_Rule__Array__Class>(type_info, "Moon", "DamageResolver+Rule[]");
        }
        inline app::DamageResolver_Rule__Array* create() {
            return il2cpp::create_object<app::DamageResolver_Rule__Array>(get_class());
        }
    } // namespace DamageResolver_Rule__Array
} // namespace app::classes::types

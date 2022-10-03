#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberIDOwnerSO__Array {
        namespace {
            app::UberIDOwnerSO__Array__Class* type_info_ref = nullptr;
        }
        app::UberIDOwnerSO__Array__Class** type_info = &type_info_ref;
        inline app::UberIDOwnerSO__Array__Class* get_class() {
            return il2cpp::get_class<app::UberIDOwnerSO__Array__Class>(type_info, "Moon", "UberIDOwnerSO[]");
        }
        inline app::UberIDOwnerSO__Array* create() {
            return il2cpp::create_object<app::UberIDOwnerSO__Array>(get_class());
        }
    } // namespace UberIDOwnerSO__Array
} // namespace app::classes::types

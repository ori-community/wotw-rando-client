#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberIDOwnerSO {
        namespace {
            app::UberIDOwnerSO__Class* type_info_ref = nullptr;
        }
        app::UberIDOwnerSO__Class** type_info = &type_info_ref;
        inline app::UberIDOwnerSO__Class* get_class() {
            return il2cpp::get_class<app::UberIDOwnerSO__Class>(type_info, "Moon", "UberIDOwnerSO");
        }
        inline app::UberIDOwnerSO* create() {
            return il2cpp::create_object<app::UberIDOwnerSO>(get_class());
        }
        inline app::UberIDOwnerSO__Array* create_array(int size) {
            return il2cpp::array_new<app::UberIDOwnerSO__Array>(get_class(), size);
        }
    } // namespace UberIDOwnerSO
} // namespace app::classes::types

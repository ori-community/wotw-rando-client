#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Bank {
        namespace {
            app::Bank__Class* type_info_ref = nullptr;
        }
        app::Bank__Class** type_info = &type_info_ref;
        inline app::Bank__Class* get_class() {
            return il2cpp::get_class<app::Bank__Class>(type_info, "AK.Wwise", "Bank");
        }
        inline app::Bank* create() {
            return il2cpp::create_object<app::Bank>(get_class());
        }
        inline app::Bank__Array* create_array(int size) {
            return il2cpp::array_new<app::Bank__Array>(get_class(), size);
        }
    } // namespace Bank
} // namespace app::classes::types

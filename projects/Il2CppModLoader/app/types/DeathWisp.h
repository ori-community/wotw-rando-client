#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DeathWisp {
        namespace {
            app::DeathWisp__Class* type_info_ref = nullptr;
        }
        app::DeathWisp__Class** type_info = &type_info_ref;
        inline app::DeathWisp__Class* get_class() {
            return il2cpp::get_class<app::DeathWisp__Class>(type_info, "", "DeathWisp");
        }
        inline app::DeathWisp* create() {
            return il2cpp::create_object<app::DeathWisp>(get_class());
        }
        inline app::DeathWisp__Array* create_array(int size) {
            return il2cpp::array_new<app::DeathWisp__Array>(get_class(), size);
        }
        inline app::DeathWisp__Array* create_array(const std::vector<app::DeathWisp*>& items) {
            return il2cpp::array_new<app::DeathWisp__Array>(get_class(), items);
        }
    } // namespace DeathWisp
} // namespace app::classes::types

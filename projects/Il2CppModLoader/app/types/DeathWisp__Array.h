#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DeathWisp__Array {
        namespace {
            app::DeathWisp__Array__Class* type_info_ref = nullptr;
        }
        app::DeathWisp__Array__Class** type_info = &type_info_ref;
        inline app::DeathWisp__Array__Class* get_class() {
            return il2cpp::get_class<app::DeathWisp__Array__Class>(type_info, "", "DeathWisp[]");
        }
        inline app::DeathWisp__Array* create() {
            return il2cpp::create_object<app::DeathWisp__Array>(get_class());
        }
    } // namespace DeathWisp__Array
} // namespace app::classes::types

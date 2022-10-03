#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InputData__Array {
        namespace {
            app::InputData__Array__Class* type_info_ref = nullptr;
        }
        app::InputData__Array__Class** type_info = &type_info_ref;
        inline app::InputData__Array__Class* get_class() {
            return il2cpp::get_class<app::InputData__Array__Class>(type_info, "", "InputData[]");
        }
        inline app::InputData__Array* create() {
            return il2cpp::create_object<app::InputData__Array>(get_class());
        }
    } // namespace InputData__Array
} // namespace app::classes::types

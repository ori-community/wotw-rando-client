#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BigInteger_Kernel_1 {
        namespace {
            app::BigInteger_Kernel_1__Class* type_info_ref = nullptr;
        }
        app::BigInteger_Kernel_1__Class** type_info = &type_info_ref;
        inline app::BigInteger_Kernel_1__Class* get_class() {
            return il2cpp::get_nested_class<app::BigInteger_Kernel_1__Class>(type_info, "Mono.Math", "BigInteger", "Kernel");
        }
        inline app::BigInteger_Kernel_1* create() {
            return il2cpp::create_object<app::BigInteger_Kernel_1>(get_class());
        }
    } // namespace BigInteger_Kernel_1
} // namespace app::classes::types

#pragma once
#include <Modloader/app/structs/BigInteger_Kernel_1.h>
#include <Modloader/app/structs/BigInteger_Kernel_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BigInteger_Kernel_1 {
        inline app::BigInteger_Kernel_1__Class** type_info() {
            static app::BigInteger_Kernel_1__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BigInteger_Kernel_1__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BigInteger_Kernel_1__Class* get_class() {
            return il2cpp::get_nested_class<app::BigInteger_Kernel_1__Class>(type_info(), "Mono.Math", "BigInteger", "Kernel");
        }
        inline app::BigInteger_Kernel_1* create() {
            return il2cpp::create_object<app::BigInteger_Kernel_1>(get_class());
        }
    } // namespace BigInteger_Kernel_1
} // namespace app::classes::types

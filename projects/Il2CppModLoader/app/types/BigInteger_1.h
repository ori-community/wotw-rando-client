#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BigInteger_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BigInteger_1__Class** type_info;
        inline app::BigInteger_1__Class* get_class() {
            return il2cpp::get_class<app::BigInteger_1__Class>(type_info, "Mono.Math", "BigInteger");
        }
        inline app::BigInteger_1* create() {
            return il2cpp::create_object<app::BigInteger_1>(get_class());
        }
        inline app::BigInteger_1__Array* create_array(int size) {
            return il2cpp::array_new<app::BigInteger_1__Array>(get_class(), size);
        }
    } // namespace BigInteger_1
} // namespace app::classes::types

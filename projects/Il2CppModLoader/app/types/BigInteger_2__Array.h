#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BigInteger_2__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BigInteger_2__Array__Class** type_info;
        inline app::BigInteger_2__Array__Class* get_class() {
            return il2cpp::get_class<app::BigInteger_2__Array__Class>(type_info, "System.Numerics", "BigInteger[]");
        }
        inline app::BigInteger_2__Array* create() {
            return il2cpp::create_object<app::BigInteger_2__Array>(get_class());
        }
    } // namespace BigInteger_2__Array
} // namespace app::classes::types

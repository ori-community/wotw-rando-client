#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BigInteger {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BigInteger__Class** type_info;
        inline app::BigInteger__Class* get_class() {
            return il2cpp::get_class<app::BigInteger__Class>(type_info, "Mono.Math", "BigInteger");
        }
        inline app::BigInteger* create() {
            return il2cpp::create_object<app::BigInteger>(get_class());
        }
        inline app::BigInteger__Array* create_array(int size) {
            return il2cpp::array_new<app::BigInteger__Array>(get_class(), size);
        }
        inline app::BigInteger__Array* create_array(const std::vector<app::BigInteger*>& items) {
            return il2cpp::array_new<app::BigInteger__Array>(get_class(), items);
        }
    } // namespace BigInteger
} // namespace app::classes::types

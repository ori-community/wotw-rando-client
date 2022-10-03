#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BigInteger_ModulusRing_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BigInteger_ModulusRing_1__Class** type_info;
        inline app::BigInteger_ModulusRing_1__Class* get_class() {
            return il2cpp::get_nested_class<app::BigInteger_ModulusRing_1__Class>(type_info, "Mono.Math", "BigInteger", "ModulusRing");
        }
        inline app::BigInteger_ModulusRing_1* create() {
            return il2cpp::create_object<app::BigInteger_ModulusRing_1>(get_class());
        }
    } // namespace BigInteger_ModulusRing_1
} // namespace app::classes::types

#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BigInteger_ModulusRing {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BigInteger_ModulusRing__Class** type_info;
        inline app::BigInteger_ModulusRing__Class* get_class() {
            return il2cpp::get_nested_class<app::BigInteger_ModulusRing__Class>(type_info, "Mono.Math", "BigInteger", "ModulusRing");
        }
        inline app::BigInteger_ModulusRing* create() {
            return il2cpp::create_object<app::BigInteger_ModulusRing>(get_class());
        }
    } // namespace BigInteger_ModulusRing
} // namespace app::classes::types

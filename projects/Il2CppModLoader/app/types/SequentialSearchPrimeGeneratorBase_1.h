#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SequentialSearchPrimeGeneratorBase_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SequentialSearchPrimeGeneratorBase_1__Class** type_info;
        inline app::SequentialSearchPrimeGeneratorBase_1__Class* get_class() {
            return il2cpp::get_class<app::SequentialSearchPrimeGeneratorBase_1__Class>(type_info, "Mono.Math.Prime.Generator", "SequentialSearchPrimeGeneratorBase");
        }
        inline app::SequentialSearchPrimeGeneratorBase_1* create() {
            return il2cpp::create_object<app::SequentialSearchPrimeGeneratorBase_1>(get_class());
        }
    } // namespace SequentialSearchPrimeGeneratorBase_1
} // namespace app::classes::types

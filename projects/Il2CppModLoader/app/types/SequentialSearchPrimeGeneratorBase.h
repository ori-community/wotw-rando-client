#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SequentialSearchPrimeGeneratorBase {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SequentialSearchPrimeGeneratorBase__Class** type_info;
        inline app::SequentialSearchPrimeGeneratorBase__Class* get_class() {
            return il2cpp::get_class<app::SequentialSearchPrimeGeneratorBase__Class>(type_info, "Mono.Math.Prime.Generator", "SequentialSearchPrimeGeneratorBase");
        }
        inline app::SequentialSearchPrimeGeneratorBase* create() {
            return il2cpp::create_object<app::SequentialSearchPrimeGeneratorBase>(get_class());
        }
    } // namespace SequentialSearchPrimeGeneratorBase
} // namespace app::classes::types

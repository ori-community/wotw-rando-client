#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PrimeGeneratorBase_1 {
        namespace {
            app::PrimeGeneratorBase_1__Class* type_info_ref = nullptr;
        }
        app::PrimeGeneratorBase_1__Class** type_info = &type_info_ref;
        inline app::PrimeGeneratorBase_1__Class* get_class() {
            return il2cpp::get_class<app::PrimeGeneratorBase_1__Class>(type_info, "Mono.Math.Prime.Generator", "PrimeGeneratorBase");
        }
        inline app::PrimeGeneratorBase_1* create() {
            return il2cpp::create_object<app::PrimeGeneratorBase_1>(get_class());
        }
    } // namespace PrimeGeneratorBase_1
} // namespace app::classes::types

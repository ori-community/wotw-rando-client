#pragma once
#include <Modloader/app/structs/PrimeGeneratorBase.h>
#include <Modloader/app/structs/PrimeGeneratorBase__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PrimeGeneratorBase {
        inline app::PrimeGeneratorBase__Class** type_info() {
            static app::PrimeGeneratorBase__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PrimeGeneratorBase__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PrimeGeneratorBase__Class* get_class() {
            return il2cpp::get_class<app::PrimeGeneratorBase__Class>(type_info(), "Mono.Math.Prime.Generator", "PrimeGeneratorBase");
        }
        inline app::PrimeGeneratorBase* create() {
            return il2cpp::create_object<app::PrimeGeneratorBase>(get_class());
        }
    } // namespace PrimeGeneratorBase
} // namespace app::classes::types

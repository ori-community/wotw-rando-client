#pragma once
#include <Modloader/app/structs/SequentialSearchPrimeGeneratorBase.h>
#include <Modloader/app/structs/SequentialSearchPrimeGeneratorBase__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SequentialSearchPrimeGeneratorBase {
        inline app::SequentialSearchPrimeGeneratorBase__Class** type_info() {
            static app::SequentialSearchPrimeGeneratorBase__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SequentialSearchPrimeGeneratorBase__Class**)(modloader::win::memory::resolve_rva(0x04708130));
            }
            return cache;
        }
        inline app::SequentialSearchPrimeGeneratorBase__Class* get_class() {
            return il2cpp::get_class<app::SequentialSearchPrimeGeneratorBase__Class>(type_info(), "Mono.Math.Prime.Generator", "SequentialSearchPrimeGeneratorBase");
        }
        inline app::SequentialSearchPrimeGeneratorBase* create() {
            return il2cpp::create_object<app::SequentialSearchPrimeGeneratorBase>(get_class());
        }
    } // namespace SequentialSearchPrimeGeneratorBase
} // namespace app::classes::types

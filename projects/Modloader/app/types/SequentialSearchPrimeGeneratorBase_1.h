#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SequentialSearchPrimeGeneratorBase_1__Class.h>
#include <Modloader/app/structs/SequentialSearchPrimeGeneratorBase_1.h>

namespace app::classes::types {
    namespace SequentialSearchPrimeGeneratorBase_1 {
        inline app::SequentialSearchPrimeGeneratorBase_1__Class** type_info = (app::SequentialSearchPrimeGeneratorBase_1__Class**)(modloader::win::memory::resolve_rva(0x047134F0));
        inline app::SequentialSearchPrimeGeneratorBase_1__Class* get_class() {
            return il2cpp::get_class<app::SequentialSearchPrimeGeneratorBase_1__Class>(type_info, "Mono.Math.Prime.Generator", "SequentialSearchPrimeGeneratorBase");
        }
        inline app::SequentialSearchPrimeGeneratorBase_1* create() {
            return il2cpp::create_object<app::SequentialSearchPrimeGeneratorBase_1>(get_class());
        }
    } // namespace SequentialSearchPrimeGeneratorBase_1
} // namespace app::classes::types

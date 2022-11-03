#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PrimeGeneratorBase {
        namespace {
            inline app::PrimeGeneratorBase__Class* type_info_ref = nullptr;
        }
        inline app::PrimeGeneratorBase__Class** type_info = &type_info_ref;
        inline app::PrimeGeneratorBase__Class* get_class() {
            return il2cpp::get_class<app::PrimeGeneratorBase__Class>(type_info, "Mono.Math.Prime.Generator", "PrimeGeneratorBase");
        }
        inline app::PrimeGeneratorBase* create() {
            return il2cpp::create_object<app::PrimeGeneratorBase>(get_class());
        }
    } // namespace PrimeGeneratorBase
} // namespace app::classes::types

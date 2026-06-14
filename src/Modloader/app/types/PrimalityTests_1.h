#pragma once
#include <Modloader/app/structs/PrimalityTests_1.h>
#include <Modloader/app/structs/PrimalityTests_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PrimalityTests_1 {
        inline app::PrimalityTests_1__Class** type_info() {
            static app::PrimalityTests_1__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PrimalityTests_1__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PrimalityTests_1__Class* get_class() {
            return il2cpp::get_class<app::PrimalityTests_1__Class>(type_info(), "Mono.Math.Prime", "PrimalityTests");
        }
        inline app::PrimalityTests_1* create() {
            return il2cpp::create_object<app::PrimalityTests_1>(get_class());
        }
    } // namespace PrimalityTests_1
} // namespace app::classes::types

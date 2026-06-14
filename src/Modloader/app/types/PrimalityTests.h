#pragma once
#include <Modloader/app/structs/PrimalityTests.h>
#include <Modloader/app/structs/PrimalityTests__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PrimalityTests {
        inline app::PrimalityTests__Class** type_info() {
            static app::PrimalityTests__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PrimalityTests__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PrimalityTests__Class* get_class() {
            return il2cpp::get_class<app::PrimalityTests__Class>(type_info(), "Mono.Math.Prime", "PrimalityTests");
        }
        inline app::PrimalityTests* create() {
            return il2cpp::create_object<app::PrimalityTests>(get_class());
        }
    } // namespace PrimalityTests
} // namespace app::classes::types

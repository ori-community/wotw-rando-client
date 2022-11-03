#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PrimalityTests {
        namespace {
            inline app::PrimalityTests__Class* type_info_ref = nullptr;
        }
        inline app::PrimalityTests__Class** type_info = &type_info_ref;
        inline app::PrimalityTests__Class* get_class() {
            return il2cpp::get_class<app::PrimalityTests__Class>(type_info, "Mono.Math.Prime", "PrimalityTests");
        }
        inline app::PrimalityTests* create() {
            return il2cpp::create_object<app::PrimalityTests>(get_class());
        }
    } // namespace PrimalityTests
} // namespace app::classes::types

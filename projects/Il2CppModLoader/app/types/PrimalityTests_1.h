#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PrimalityTests_1 {
        namespace {
            inline app::PrimalityTests_1__Class* type_info_ref = nullptr;
        }
        inline app::PrimalityTests_1__Class** type_info = &type_info_ref;
        inline app::PrimalityTests_1__Class* get_class() {
            return il2cpp::get_class<app::PrimalityTests_1__Class>(type_info, "Mono.Math.Prime", "PrimalityTests");
        }
        inline app::PrimalityTests_1* create() {
            return il2cpp::create_object<app::PrimalityTests_1>(get_class());
        }
    } // namespace PrimalityTests_1
} // namespace app::classes::types

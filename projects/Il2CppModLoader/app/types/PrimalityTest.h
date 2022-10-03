#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PrimalityTest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PrimalityTest__Class** type_info;
        inline app::PrimalityTest__Class* get_class() {
            return il2cpp::get_class<app::PrimalityTest__Class>(type_info, "Mono.Math.Prime", "PrimalityTest");
        }
        inline app::PrimalityTest* create() {
            return il2cpp::create_object<app::PrimalityTest>(get_class());
        }
    } // namespace PrimalityTest
} // namespace app::classes::types

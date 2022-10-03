#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace OwlProjectileTest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::OwlProjectileTest__Class** type_info;
        inline app::OwlProjectileTest__Class* get_class() {
            return il2cpp::get_class<app::OwlProjectileTest__Class>(type_info, "", "OwlProjectileTest");
        }
        inline app::OwlProjectileTest* create() {
            return il2cpp::create_object<app::OwlProjectileTest>(get_class());
        }
    } // namespace OwlProjectileTest
} // namespace app::classes::types

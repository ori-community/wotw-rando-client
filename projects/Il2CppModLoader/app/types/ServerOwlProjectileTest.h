#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ServerOwlProjectileTest {
        namespace {
            app::ServerOwlProjectileTest__Class* type_info_ref = nullptr;
        }
        app::ServerOwlProjectileTest__Class** type_info = &type_info_ref;
        inline app::ServerOwlProjectileTest__Class* get_class() {
            return il2cpp::get_class<app::ServerOwlProjectileTest__Class>(type_info, "", "ServerOwlProjectileTest");
        }
        inline app::ServerOwlProjectileTest* create() {
            return il2cpp::create_object<app::ServerOwlProjectileTest>(get_class());
        }
    } // namespace ServerOwlProjectileTest
} // namespace app::classes::types

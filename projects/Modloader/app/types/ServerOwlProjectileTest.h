#pragma once
#include <Modloader/app/structs/ServerOwlProjectileTest.h>
#include <Modloader/app/structs/ServerOwlProjectileTest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ServerOwlProjectileTest {
        inline app::ServerOwlProjectileTest__Class** type_info() {
            static app::ServerOwlProjectileTest__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ServerOwlProjectileTest__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ServerOwlProjectileTest__Class* get_class() {
            return il2cpp::get_class<app::ServerOwlProjectileTest__Class>(type_info(), "", "ServerOwlProjectileTest");
        }
        inline app::ServerOwlProjectileTest* create() {
            return il2cpp::create_object<app::ServerOwlProjectileTest>(get_class());
        }
    } // namespace ServerOwlProjectileTest
} // namespace app::classes::types

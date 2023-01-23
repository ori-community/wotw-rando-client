#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ServerOwlProjectileTest__Class.h>
#include <Modloader/app/structs/ServerOwlProjectileTest.h>

namespace app::classes::types {
    namespace ServerOwlProjectileTest {
        namespace {
            inline app::ServerOwlProjectileTest__Class* type_info_ref = nullptr;
        }
        inline app::ServerOwlProjectileTest__Class** type_info = &type_info_ref;
        inline app::ServerOwlProjectileTest__Class* get_class() {
            return il2cpp::get_class<app::ServerOwlProjectileTest__Class>(type_info, "", "ServerOwlProjectileTest");
        }
        inline app::ServerOwlProjectileTest* create() {
            return il2cpp::create_object<app::ServerOwlProjectileTest>(get_class());
        }
    } // namespace ServerOwlProjectileTest
} // namespace app::classes::types

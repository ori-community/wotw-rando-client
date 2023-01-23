#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/OwlProjectileTest__Class.h>
#include <Modloader/app/structs/OwlProjectileTest.h>

namespace app::classes::types {
    namespace OwlProjectileTest {
        inline app::OwlProjectileTest__Class** type_info = (app::OwlProjectileTest__Class**)(modloader::win::memory::resolve_rva(0x04702C30));
        inline app::OwlProjectileTest__Class* get_class() {
            return il2cpp::get_class<app::OwlProjectileTest__Class>(type_info, "", "OwlProjectileTest");
        }
        inline app::OwlProjectileTest* create() {
            return il2cpp::create_object<app::OwlProjectileTest>(get_class());
        }
    } // namespace OwlProjectileTest
} // namespace app::classes::types

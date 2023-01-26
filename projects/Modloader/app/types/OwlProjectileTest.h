#pragma once
#include <Modloader/app/structs/OwlProjectileTest.h>
#include <Modloader/app/structs/OwlProjectileTest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OwlProjectileTest {
        inline app::OwlProjectileTest__Class** type_info() {
            static app::OwlProjectileTest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::OwlProjectileTest__Class**)(modloader::win::memory::resolve_rva(0x04702C30));
            }
            return cache;
        }
        inline app::OwlProjectileTest__Class* get_class() {
            return il2cpp::get_class<app::OwlProjectileTest__Class>(type_info(), "", "OwlProjectileTest");
        }
        inline app::OwlProjectileTest* create() {
            return il2cpp::create_object<app::OwlProjectileTest>(get_class());
        }
    } // namespace OwlProjectileTest
} // namespace app::classes::types

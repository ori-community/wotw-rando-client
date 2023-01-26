#pragma once
#include <Modloader/app/structs/PhysicsLimitTest.h>
#include <Modloader/app/structs/PhysicsLimitTest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PhysicsLimitTest {
        inline app::PhysicsLimitTest__Class** type_info() {
            static app::PhysicsLimitTest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PhysicsLimitTest__Class**)(modloader::win::memory::resolve_rva(0x04767F20));
            }
            return cache;
        }
        inline app::PhysicsLimitTest__Class* get_class() {
            return il2cpp::get_class<app::PhysicsLimitTest__Class>(type_info(), "", "PhysicsLimitTest");
        }
        inline app::PhysicsLimitTest* create() {
            return il2cpp::create_object<app::PhysicsLimitTest>(get_class());
        }
    } // namespace PhysicsLimitTest
} // namespace app::classes::types
